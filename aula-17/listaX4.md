# Lista X4 - Lista de Revisão de Algoritmos de Busca, Ordenação e Estruturas

## 1. Busca Linear

Um sistema de catraca de academia precisa verificar se a matrícula digitada pelo aluno existe no vetor de matrículas ativas. O vetor não está ordenado (as matrículas são cadastradas na ordem de chegada).

a) Implemente em C a função `int buscaLinear(int v[], int n, int chave)` que retorna o índice da chave ou `-1` se não encontrada.

[Abrir Aula 17.1](/aula-17/aula17.1.c)

b) Explique por que a busca binária não poderia ser usada nesse cenário sem uma etapa prévia.
    Porque o pre requisito dela é que o vetor esteja ordenado, porém nesse problema o vetor não está ordenado

c) Qual é a complexidade de tempo no pior caso? Justifique.
    se a matricula do aluno for a ultima do vetor

## 2. Busca Binária

Um e-commerce mantém um vetor de códigos de produto ordenado crescentemente para consulta rápida no balcão.

a) Implemente `int buscaBinaria(int v[], int n, int chave)` de forma iterativa.

[Abrir Aula 17.2](/aula-17/aula17.2.c)

b) Faça o teste de mesa para o vetor `{3, 8, 15, 21, 34, 55, 89}` buscando a chave `21`. Mostre `inicio`, `meio` e `fim` a cada iteração.

c) Quantas comparações no máximo a busca binária faz para um vetor de 1.000.000 de elementos? (Dica: `⌈log₂ n⌉`)
    São necessárias, no máximo, 20 comparações, pois a busca binária divide o espaço de busca pela metade a cada iteração.

## 3. Bubble Sort

Um fliperama registra a pontuação dos jogadores em um vetor e precisa exibir o ranking do maior para o menor na tela.

a) Implemente o Bubble Sort em C ordenando de forma decrescente.

[Abrir Aula 17.3](/aula-17/aula17.3.c)

b) Aplique manualmente o algoritmo no vetor `{42, 17, 93, 8, 55}` e mostre o vetor após cada passada completa.

c) Explique o que é a otimização com a flag `trocou` e qual seu impacto no melhor caso (vetor já ordenado).

## 4. Insertion Sort

Um posto de vacinação recebe clientes continuamente e mantém uma fila de atendimento ordenada por idade (prioridade para idosos). Cada novo cliente é inserido na posição correta — exatamente o comportamento do Insertion Sort.

a) Implemente `void insertionSort(int v[], int n)` em C.

[Abrir Aula 17.4](/aula-17/aula17.4.c)

b) Explique, com suas palavras, por que o Insertion Sort é adequado para inserção incremental de dados (chegada de novos clientes), diferente do Bubble Sort.

    O Insertion Sort é adequado porque permite adicionar novos dados e posicioná-los corretamente sem precisar ordenar todo o vetor novamente. Já o Bubble Sort precisa percorrer o vetor fazendo várias comparações e trocas para organizar os elementos.

c) Qual a complexidade no melhor e no pior caso? Em qual situação prática cada um ocorre?
    melhor - se tiver tudo ordenado.
    pior - se tiver na ordem invertido você quer crescente e o vetor esta decrecente.
## 5. Selection Sort

Um escalonador simples de processos precisa, a cada rodada, escolher a tarefa de menor tempo de execução (Shortest Job First) entre as pendentes para executá-la primeiro.

a) Implemente o Selection Sort em C.

[Abrir Aula 17.5](/aula-17/aula17.5.c)

    Selection Sort: Percorre o vetor procurando o menor elemento e, ao encontrá-lo, troca sua posição com o primeiro elemento da parte ainda não ordenada. Depois repete o processo para as próximas posições.

b) Relacione o algoritmo com a política SJF: a cada iteração, o que o Selection Sort faz que corresponde a "escolher a menor tarefa"?

    A cada iteração, o Selection Sort procura a tarefa com o menor tempo de execução entre as tarefas restantes e a coloca na primeira posição disponível, assim como a política SJF escolhe a menor tarefa para executar primeiro.

c) O Selection Sort é estável? Justifique com um exemplo de vetor em que a estabilidade é violada (use pares com mesma chave).
    não estável

## 6. Lista Encadeada Simples

Um app de música mantém uma playlist como lista encadeada simples, pois o usuário adiciona e remove músicas no meio da lista com frequência (diferente de um vetor, que exigiria deslocamento).

a) Defina a `struct No { char titulo[50]; struct No *prox; }` e implemente:

- `No* inserirNoInicio(No *head, const char *titulo)`
- `No* removerPorTitulo(No *head, const char *titulo)` (retorna a nova cabeça)
- `void imprimir(No *head)`

[Abrir Aula 17.6](/aula-17/aula17.6.c)

b) Explique por que a remoção por título é O(n) mesmo em lista encadeada.


c) Em qual operação a lista encadeada é vantajosa em relação ao vetor? Justifique.

## 7. Pilha (Stack)

Um editor de código precisa verificar se os parênteses, colchetes e chaves de um trecho de código estão balanceados antes de compilar.

a) Implemente uma pilha em C (com vetor e variável `topo`) com `push`, `pop`, `isEmpty` e `isFull`.

[Abrir Aula 17.7](/aula-17/aula17.7.c)

b) Implemente `int balanceado(const char *expr)` usando a pilha: ao encontrar `(`, `[` ou `{`, empilhe; ao encontrar o fechamento, desempilhe e verifique a correspondência.

c) Teste mentalmente com `"{[()]}"` (balanceado) e `"{[(])}"` (não balanceado) e descreva o estado da pilha em cada passo.

## 8. Fila (Queue)

Uma impressora recebe trabalhos de vários usuários. O primeiro a chegar é o primeiro a ser impresso (FIFO) — comportamento clássico de fila.

a) Implemente uma fila circular em vetor com `enqueue`, `dequeue`, `isEmpty` e `isFull` (use `inicio`, `fim` e `count` ou a técnica de "deixar um espaço vazio").

b) Explique por que a fila circular é preferível à fila linear em vetor quando há muitas operações.

c) Simule: enfileire A, B, C; desenfileire uma vez; enfileire D; desenfileire duas vezes. Mostre o conteúdo final e os índices `inicio`/`fim`.

## 9. Árvore Binária de Busca (BST)

Uma agenda telefônica armazena contatos por nome em uma BST (Binary Search Tree) para permitir busca, inserção e listagem ordenada eficientes.

a) Defina a `struct NoArvore { char nome[50]; struct NoArvore *esq, *dir; }`.

b) Implemente `NoArvore* inserir(NoArvore *raiz, const char *nome)` e `NoArvore* buscar(NoArvore *raiz, const char *nome)`.

c) Implemente o percurso em ordem (`inOrder`) e explique por que ele lista os contatos em ordem alfabética.

d) Insira `"Carlos"`, `"Ana"`, `"Bruno"`, `"Daniela"`, `"Alice"` e desenhe a árvore resultante. Qual a altura?

## 10. Fila + Árvore Binária de Busca (BST)

Um hospital recebe pacientes em uma fila (ordem de chegada). Periodicamente, a triagem retira o próximo paciente da fila e o insere em uma BST indexada pela prioridade clínica (menor número = mais grave), para que o médico consulte o paciente mais grave rapidamente.

a) Usando as estruturas das questões 8 e 9 (adapte a chave para `int prioridade`), escreva um programa C que:

1. Enfileire os pacientes (prioridade, nome):
   - `(3, "João")`
   - `(1, "Maria")`
   - `(5, "Pedro")`
   - `(2, "Ana")`
2. Desenfileire todos e insira na BST.
3. Imprima os pacientes em ordem crescente de prioridade (use `inOrder`).

b) Explique a complexidade média e a pior caso da BST para busca, e o que acontece se as prioridades forem inseridas já em ordem crescente (ex.: `1, 2, 3, 4, 5`). Que estrutura resolveria esse problema?