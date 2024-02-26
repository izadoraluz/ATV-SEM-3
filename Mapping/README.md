Olá Hayashi! Aqui estão cinco casos de teste para as principais funcionalidades da HashTable (Tabela de Hash), com com pré-condição, etapas do teste e pós-condição, como pede o artefato:

1. **Inserção de Dados:**
   - Pré-condição: A DHT está inicialmente vazia.
   - Passos do Teste:
     1. Inserir um par chave-valor na DHT.
     2. Recuperar o valor associado à chave inserida.
   - Pós-condição: O valor recuperado deve ser igual ao valor inserido.

2. **Recuperação de Dados:**
   - Pré-condição: A DHT contém um conjunto conhecido de pares chave-valor.
   - Passos do Teste:
     1. Selecionar uma chave presente na DHT.
     2. Recuperar o valor associado à chave selecionada.
   - Pós-condição: O valor recuperado deve ser igual ao valor previamente associado à chave na DHT.

3. **Atualização de Dados:**
   - Pré-condição: A DHT contém um par chave-valor existente.
   - Passos do Teste:
     1. Selecionar uma chave existente na DHT.
     2. Atualizar o valor associado à chave selecionada.
     3. Recuperar o valor atualizado utilizando a mesma chave.
   - Pós-condição: O valor recuperado deve ser igual ao valor atualizado.

4. **Remoção de Dados:**
   - Pré-condição: A DHT contém um par chave-valor existente.
   - Passos do Teste:
     1. Selecionar uma chave existente na DHT.
     2. Remover o par chave-valor associado à chave selecionada.
     3. Tentar recuperar o valor utilizando a chave removida.
   - Pós-condição: A tentativa de recuperação do valor deve retornar um valor nulo ou indicar que a chave não está mais presente na DHT.

5. **Tratamento de Colisões de Hash:**
   - Pré-condição: A DHT contém um par chave-valor existente que resultou em colisão de hash.
   - Passos do Teste:
     1. Tentar inserir um novo par chave-valor com uma chave que colida com uma chave existente na DHT.
     2. Verificar se a inserção falha ou se a DHT trata adequadamente a colisão de hash.
   - Pós-condição: A inserção da chave colidente deve ser tratada corretamente, seja evitando a inserção ou resolvendo a colisão de forma apropriada.


