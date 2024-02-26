Olá Hayashi! Aqui estão cinco casos de teste para as principais funcionalidades da HashTable (Tabela de Hash), com com pré-condição, etapas do teste e pós-condição, como pede o artefato:

1. **Inserir e Pesquisar Mercadoria Existente:**
   - Pré-condição: Tabela de hash vazia.
   - Passos do teste:
     1. Inserir uma mercadoria existente na tabela de hash.
     2. Pesquisar a mercadoria inserida na tabela de hash.
   - Pós-condição: A mercadoria é encontrada com sucesso na tabela de hash.

2. **Pesquisar Mercadoria Inexistente:**
   - Pré-condição: Tabela de hash vazia ou sem a mercadoria a ser pesquisada.
   - Passos do teste:
     1. Pesquisar uma mercadoria que não está na tabela de hash.
   - Pós-condição: Nenhuma mercadoria é encontrada na tabela de hash.

3. **Remover Mercadoria Existente:**
   - Pré-condição: Tabela de hash com a mercadoria a ser removida.
   - Passos do teste:
     1. Remover uma mercadoria existente na tabela de hash.
     2. Tentar pesquisar a mercadoria removida na tabela de hash.
   - Pós-condição: A mercadoria é removida com sucesso da tabela de hash.

4. **Remover Mercadoria Inexistente:**
   - Pré-condição: Tabela de hash vazia ou sem a mercadoria a ser removida.
   - Passos do teste:
     1. Tentar remover uma mercadoria que não está na tabela de hash.
   - Pós-condição: Nenhuma alteração na tabela de hash, já que a mercadoria não está presente.

5. **Colisões de Hash:**
   - Pré-condição: Inserir várias mercadorias na mesma posição de hash.
   - Passos do teste:
     1. Inserir várias mercadorias na tabela de hash, resultando em colisões.
     2. Pesquisar todas as mercadorias inseridas na tabela de hash.
   - Pós-condição: Todas as mercadorias são encontradas corretamente na tabela de hash, sem colisões detectadas.
