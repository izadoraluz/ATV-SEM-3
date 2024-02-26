#include <iostream>
#include <cassert>
#include <list>
#include <string>

// Classe Mercadoria
class Mercadoria {
private:
    int codigo;
    std::string nome;
    float preco;

public:
    Mercadoria(int codigo, std::string nome, float preco) : codigo(codigo), nome(nome), preco(preco) {}

    int getCodigo() const {
        return codigo;
    }

    std::string getNome() const {
        return nome;
    }

    float getPreco() const {
        return preco;
    }
};

// Classe HashTable
class HashTable {
private:
    int size;
    std::list<Mercadoria>* table;

    int hashFunction(int key) {
        return key % size;
    }

public:
    HashTable(int size) {
        this->size = size;
        table = new std::list<Mercadoria>[size];
    }

    ~HashTable() {
        delete[] table;
    }

    void insert(const Mercadoria& mercadoria) {
        int index = hashFunction(mercadoria.getCodigo());
        table[index].push_back(mercadoria);
    }

    Mercadoria* search(int codigo) {
        int index = hashFunction(codigo);
        for (auto& m : table[index]) {
            if (m.getCodigo() == codigo) {
                return &m;
            }
        }
        return nullptr; // Mercadoria não encontrada
    }

    void remove(int codigo) {
        int index = hashFunction(codigo);
        for (auto it = table[index].begin(); it != table[index].end(); ++it) {
            if (it->getCodigo() == codigo) {
                table[index].erase(it);
                return;
            }
        }
    }
};

// Função de destinada para realizar os testes pedidos pelo autoestudo
void testHashTable() {

    // Caso de Teste 1: Inserir e Pesquisar Mercadoria Existente
    HashTable hashTable(10);
    Mercadoria m1(1, "Caneta BIC", 10.50); // Inserção da mercadoria
    hashTable.insert(m1);
    Mercadoria* found = hashTable.search(1);
    if (found != nullptr) {
        std::cout << "Caso de Teste 1 Passou: Mercadoria encontrada - Código: " << found->getCodigo() << ", Nome: " << found->getNome() << ", Preço: " << found->getPreco() << std::endl;
    } else {
        std::cout << "Caso de Teste 1 Falhou: Mercadoria não encontrada." << std::endl;
    }

    // Caso de Teste 2: Pesquisar Mercadoria Inexistente
    found = hashTable.search(2);
    if (found == nullptr) {
        std::cout << "Caso de Teste 2 Passou: Mercadoria não encontrada." << std::endl;
    } else {
        std::cout << "Caso de Teste 2 Falhou: Mercadoria encontrada - Código: " << found->getCodigo() << ", Nome: " << found->getNome() << ", Preço: " << found->getPreco() << std::endl;
    }

    // Caso de Teste 3: Remover Mercadoria Existente
    hashTable.remove(1);
    found = hashTable.search(1);
    if (found == nullptr) {
        std::cout << "Caso de Teste 3 Passou: Mercadoria removida com sucesso." << std::endl;
    } else {
        std::cout << "Caso de Teste 3 Falhou: Mercadoria ainda encontrada após remoção." << std::endl;
    }

    // Caso de Teste 4: Remover Mercadoria Inexistente
    hashTable.remove(2); // Tentar remover uma mercadoria que não está na tabela
    std::cout << "Caso de Teste 4 Passou: Tentativa de remover mercadoria inexistente." << std::endl;

    // Caso de Teste 5: Colisões de Hash
    for (int i = 0; i < 15; ++i) {
        Mercadoria m(i, "Produto " + std::to_string(i), 10.50 + i);
        hashTable.insert(m);
    }
    bool collisionPassed = true;
    for (int i = 0; i < 15; ++i) {
        found = hashTable.search(i);
        if (found == nullptr || found->getCodigo() != i) {
            collisionPassed = false;
            break;
        }
    }
    if (collisionPassed) {
        std::cout << "Caso de Teste 5 Passou: Todas as mercadorias foram inseridas corretamente sem colisões." << std::endl;
    } else {
        std::cout << "Caso de Teste 5 Falhou: Colisão detectada." << std::endl;
    }
}

// Função principal
int main() {
    testHashTable();
    return 0;
}