# Distributed Hash Table Implementation

## 👤 **Integrante:**

- [Izadora Luz](https://www.linkedin.com/in/izadoraluz-rsn/)

## 👨‍🏫 **Professores:**

- [Renato Penha](https://www.linkedin.com/in/renato-penha/) - Professor orientador
- [Victor Hayashi](https://www.linkedin.com/in/vthayashi/) - Professor de programação

## **📝 Descrição**

Este projeto implementa uma Distributed Hash Table (DHT) em C++ utilizando uma estrutura de dados de tabela de hash para armazenar e recuperar informações de mercadorias. A implementação é feita a partir de um arquivo em C++ (`hashtable.cpp`) e inclui uma série de casos de teste para validar as funcionalidades principais da DHT, como inserção, pesquisa, remoção e tratamento de colisões de hash.

Além disso, o projeto inclui um contrato inteligente escrito em Solidity (`mapping.sol`), que implementa uma estrutura de tabela de hash para armazenar e manipular mercadorias na blockchain Ethereum. O contrato permite a inserção, busca, remoção de mercadorias e a verificação de colisões de hash.


## **📁 Estrutura de pastas**

- `HashTable/`
  - `hashtable.cpp`: Implementação da tabela de hash distribuída em C++.
- `Mapping/`
  - `mapping.sol`: Implementação de uma tabela de hash como contrato inteligente em Solidity.
- `README.md`: Documentação do projeto.

## **💻 Tecnologias Utilizadas**

- **C++**: Linguagem de programação utilizada para implementar a Distributed Hash Table (DHT).
- **Solidity**: Linguagem de programação utilizada para desenvolver contratos inteligentes na blockchain Ethereum.
- **IDE de sua escolha**: Para desenvolver e testar a implementação em C++.

## 🧪 **Documentação dos casos de teste**

### Introdução

Os casos de teste foram criados para verificar as funcionalidades essenciais da tabela de hash distribuída (DHT) implementada em C++ e do contrato inteligente de hash table em Solidity. Abaixo, são descritos os casos de teste para cada uma das implementações, incluindo a pré-condição, os passos do teste e a pós-condição esperada para cada caso.

### Casos de Teste de Hash Table (C++)

1. **Inserir e Pesquisar Mercadoria Existente:**
   - **Pré-condição**: Tabela de hash vazia.
   - **Passos do teste**:
     1. Inserir uma mercadoria existente na tabela de hash.
     2. Pesquisar a mercadoria inserida na tabela de hash.
   - **Pós-condição**: A mercadoria é encontrada com sucesso na tabela de hash.

2. **Pesquisar Mercadoria Inexistente:**
   - **Pré-condição**: Tabela de hash vazia ou sem a mercadoria a ser pesquisada.
   - **Passos do teste**:
     1. Pesquisar uma mercadoria que não está na tabela de hash.
   - **Pós-condição**: Nenhuma mercadoria é encontrada na tabela de hash.

3. **Remover Mercadoria Existente:**
   - **Pré-condição**: Tabela de hash com a mercadoria a ser removida.
   - **Passos do teste**:
     1. Remover uma mercadoria existente na tabela de hash.
     2. Tentar pesquisar a mercadoria removida na tabela de hash.
   - **Pós-condição**: A mercadoria é removida com sucesso da tabela de hash.

4. **Remover Mercadoria Inexistente:**
   - **Pré-condição**: Tabela de hash vazia ou sem a mercadoria a ser removida.
   - **Passos do teste**:
     1. Tentar remover uma mercadoria que não está na tabela de hash.
   - **Pós-condição**: Nenhuma alteração na tabela de hash, já que a mercadoria não está presente.

5. **Colisões de Hash:**
   - **Pré-condição**: Inserir várias mercadorias na mesma posição de hash.
   - **Passos do teste**:
     1. Inserir várias mercadorias na tabela de hash, resultando em colisões.
     2. Pesquisar todas as mercadorias inseridas na tabela de hash.
   - **Pós-condição**: Todas as mercadorias são encontradas corretamente na tabela de hash, sem colisões detectadas.

### Casos de Teste de Mapping (Solidity)

1. **Inserção de Dados:**
   - **Pré-condição**: A DHT está inicialmente vazia.
   - **Passos do Teste**:
     1. Inserir um par chave-valor na DHT.
     2. Recuperar o valor associado à chave inserida.
   - **Pós-condição**: O valor recuperado deve ser igual ao valor inserido.

2. **Recuperação de Dados:**
   - **Pré-condição**: A DHT contém um conjunto conhecido de pares chave-valor.
   - **Passos do Teste**:
     1. Selecionar uma chave presente na DHT.
     2. Recuperar o valor associado à chave selecionada.
   - **Pós-condição**: O valor recuperado deve ser igual ao valor previamente associado à chave na DHT.

3. **Atualização de Dados:**
   - **Pré-condição**: A DHT contém um par chave-valor existente.
   - **Passos do Teste**:
     1. Selecionar uma chave existente na DHT.
     2. Atualizar o valor associado à chave selecionada.
     3. Recuperar o valor atualizado utilizando a mesma chave.
   - **Pós-condição**: O valor recuperado deve ser igual ao valor atualizado.

4. **Remoção de Dados:**
   - **Pré-condição**: A DHT contém um par chave-valor existente.
   - **Passos do Teste**:
     1. Selecionar uma chave existente na DHT.
     2. Remover o par chave-valor associado à chave selecionada.
     3. Tentar recuperar o valor utilizando a chave removida.
   - **Pós-condição**: A tentativa de recuperação do valor deve retornar um valor nulo ou indicar que a chave não está mais presente na DHT.

5. **Tratamento de Colisões de Hash:**
   - **Pré-condição**: A DHT contém um par chave-valor existente que resultou em colisão de hash.
   - **Passos do Teste**:
     1. Tentar inserir um novo par chave-valor com uma chave que colida com uma chave existente na DHT.
     2. Verificar se a inserção falha ou se a DHT trata adequadamente a colisão de hash.
   - **Pós-condição**: A inserção da chave colidente deve ser tratada corretamente, seja evitando a inserção ou resolvendo a colisão de forma apropriada.