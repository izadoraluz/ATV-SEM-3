// SPDX-License-Identifier: MIT
pragma solidity >=0.6.12 <0.9.0;

contract HashTable {
    struct Mercadoria {
        string nome;
        uint256 preco;
    }

    mapping(uint256 => Mercadoria) public mercadorias;

    function inserirMercadoria(uint256 codigo, string memory nome, uint256 preco) public {
        require(!verificarColisaoHash(codigo), "Colisao de hash: esta chave ja esta em uso");
        Mercadoria memory novaMercadoria = Mercadoria(nome, preco);
        mercadorias[codigo] = novaMercadoria;
    }

    function buscarMercadoria(uint256 codigo) public view returns (string memory, uint256) {
        Mercadoria memory m = mercadorias[codigo];
        return (m.nome, m.preco);
    }

    function removerMercadoria(uint256 codigo) public {
        delete mercadorias[codigo];
    }

    function verificarColisaoHash(uint256 codigo) public view returns (bool) {
        if (mercadorias[codigo].preco != 0) {
            return true;
        } else {
            return false;
        }
    }
}
