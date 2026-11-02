# Curso de Análise e Desenvolvimento de Sistemas --- SENAC

## Problemas Clássicos de Busca e Ordenação

**Professor:** Matheus Magalhães

------------------------------------------------------------------------

## 1. Por que estudar busca e ordenação?

-   **Busca:** encontrar um elemento em uma coleção (ex.: consultar CPF
    em uma base de clientes).
-   **Ordenação:** organizar dados para facilitar busca, relatórios e
    processamento.

### Relevância prática

-   Bancos de dados (índices B-tree usam ordenação).
-   E-commerce (ordenar por preço e relevância).
-   Sistemas de recomendação, logística e jogos (rankings).

**Competência esperada:** saber escolher o algoritmo certo para o
problema, considerando tempo, memória e estabilidade.

## 2. Notação Big-O

  Complexidade   Nome           Exemplo típico
  -------------- -------------- --------------------------------
  `O(1)`         Constante      Acesso a array por índice
  `O(log n)`     Logarítmica    Busca binária
  `O(n)`         Linear         Busca linear
  `O(n log n)`   Linearítmica   Merge Sort, Quick Sort (médio)
  `O(n²)`        Quadrática     Bubble, Selection, Insertion

## 3. Busca linear

**Ideia:** percorrer o vetor do início ao fim até encontrar o elemento.

``` c
int buscaLinear(int v[], int n, int chave) {
    for (int i = 0; i < n; i++) {
        if (v[i] == chave)
            return i;      // encontrado: retorna índice
    }
    return -1;             // não encontrado
}
```

-   **Complexidade:** `O(n)` no pior/médio caso; `O(1)` no melhor.
-   **Vantagens:** funciona em vetor não ordenado; simples.
-   **Desvantagens:** lento para grandes volumes.
-   **Uso típico:** listas pequenas ou não ordenadas.

## 4. Busca binária

**Pré-requisito:** vetor ordenado.

**Ideia:** dividir o espaço de busca ao meio repetidamente.

``` c
int buscaBinaria(int v[], int n, int chave) {
    int ini = 0, fim = n - 1;
    while (ini <= fim) {
        int meio = ini + (fim - ini) / 2; // evita overflow
        if (v[meio] == chave) return meio;
        else if (v[meio] < chave) ini = meio + 1;
        else fim = meio - 1;
    }
    return -1;
}
```

-   **Complexidade:** `O(log n)`.
-   **Cuidado:** `(ini + fim) / 2` pode estourar em vetores gigantes.
    Use `ini + (fim - ini)/2`.
-   **Erro clássico:** esquecer que o vetor precisa estar ordenado.

### 4.1. Busca binária: versão recursiva

Mesma complexidade `O(log n)`, porém com custo de pilha de recursão.

**Dica:** em C, a versão iterativa é geralmente preferível por
desempenho.

``` c
int buscaBinariaRec(int v[], int ini, int fim, int chave) {
    if (ini > fim) return -1;
    int meio = ini + (fim - ini) / 2;
    if (v[meio] == chave) return meio;
    if (v[meio] < chave)
        return buscaBinariaRec(v, meio + 1, fim, chave);
    return buscaBinariaRec(v, ini, meio - 1, chave);
}
```

### 4.2. Comparativo: linear × binária

  -----------------------------------------------------------------------
  Aspecto                 Linear                  Binária
  ----------------------- ----------------------- -----------------------
  Pré-requisito           Nenhum                  Vetor ordenado

  Pior caso               `O(n)`                  `O(log n)`

  Melhor caso             `O(1)`                  `O(1)`

  Implementação           Trivial                 Simples, mas exige
                                                  cuidado

  Indicada para           Dados                   Dados grandes e
                          pequenos/desordenados   ordenados
  -----------------------------------------------------------------------

**Exemplo numérico:** em 1.000.000 de elementos, a busca binária faz
aproximadamente 20 comparações; a linear pode fazer 1.000.000.

## 5. Ordenação: visão geral

**Problema:** rearranjar elementos em ordem crescente ou decrescente.

### Critérios de avaliação

-   Complexidade de tempo (melhor, médio e pior caso).
-   Uso de memória extra (`in-place`?).
-   **Estabilidade:** mantém a ordem relativa de elementos iguais?
-   Simplicidade e custo de implementação.

**Algoritmos abordados:** Bubble, Selection e Insertion (`O(n²)`); Merge
e Quick (`O(n log n)` em média, no caso do Quick Sort).

## 6. Bubble Sort

**Ideia:** comparar pares adjacentes e "empurrar" o maior para o fim,
repetidamente.

-   **Complexidade:** `O(n²)` no pior/médio caso; `O(n)` no melhor, com
    otimização.
-   **Estável:** sim.
-   **In-place:** sim.
-   **Uso prático:** didático; raramente usado em produção.

``` c
void bubbleSort(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int trocou = 0;
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                int t = v[j];
                v[j] = v[j + 1];
                v[j + 1] = t;
                trocou = 1;
            }
        }
        if (!trocou) break; // otimização: já ordenado
    }
}
```

## 7. Selection Sort

**Ideia:** a cada iteração, selecionar o menor elemento e colocá-lo na
posição correta.

-   **Complexidade:** sempre `O(n²)`, independentemente da entrada.
-   **Estável:** não, na forma clássica.
-   **In-place:** sim.
-   **Vantagem:** poucas trocas (útil quando escrita é custosa).

``` c
void selectionSort(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++)
            if (v[j] < v[min]) min = j;

        if (min != i) {
            int t = v[i];
            v[i] = v[min];
            v[min] = t;
        }
    }
}
```

### Exemplo de execução

Vetor inicial: `(5, 3, 2, 1, 90, 6)`.

-   **Iteração 0:** encontra o menor e troca: `(1, 3, 2, 5, 90, 6)`.
-   **Iteração 1:** encontra o menor restante e troca:
    `(1, 2, 3, 5, 90, 6)`.
-   **Iteração 2:** `(1, 2, 3, 5, 90, 6)`.
-   **Iteração 3:** `(1, 2, 3, 5, 90, 6)`.
-   **Iteração 4:** troca o `90` com o `6`: `(1, 2, 3, 5, 6, 90)`.

## 8. Insertion Sort

**Ideia:** construir a parte ordenada inserindo cada elemento na posição
correta, como organizar cartas de baralho.

-   **Complexidade:** `O(n²)` no pior/médio caso; `O(n)` em vetores
    quase ordenados.
-   **Estável:** sim.
-   **In-place:** sim.
-   **Uso prático:** ótimo para listas pequenas; usado como base em
    algoritmos híbridos.

``` c
void insertionSort(int v[], int n) {
    for (int i = 1; i < n; i++) {
        int chave = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > chave) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = chave;
    }
}
```

## 9. Merge Sort

### Conceito

Paradigma **"dividir para conquistar"**:

1.  Dividir o vetor ao meio.
2.  Ordenar recursivamente as duas metades.
3.  Intercalar (`merge`) as metades ordenadas.

-   **Complexidade:** `O(n log n)` em todos os casos.
-   **Estável:** sim.
-   **Memória extra:** `O(n)`.
-   **In-place:** não.

``` c
void merge(int v[], int ini, int meio, int fim) {
    int n1 = meio - ini + 1, n2 = fim - meio;
    int *L = malloc(n1 * sizeof(int));
    int *R = malloc(n2 * sizeof(int));

    for (int i = 0; i < n1; i++) L[i] = v[ini + i];
    for (int j = 0; j < n2; j++) R[j] = v[meio + 1 + j];

    int i = 0, j = 0, k = ini;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) v[k++] = L[i++]; // <= garante estabilidade
        else v[k++] = R[j++];
    }
    while (i < n1) v[k++] = L[i++];
    while (j < n2) v[k++] = R[j++];

    free(L);
    free(R);
}

void mergeSort(int v[], int ini, int fim) {
    if (ini < fim) {
        int meio = ini + (fim - ini) / 2;
        mergeSort(v, ini, meio);
        mergeSort(v, meio + 1, fim);
        merge(v, ini, meio, fim);
    }
}

// Atenção: sempre liberar L e R com free.
```

## 10. Quick Sort

### Conceito

**Ideia:**

1.  Escolher um pivô.
2.  Particionar: menores à esquerda, maiores à direita.
3.  Ordenar recursivamente as partições.

-   **Complexidade média:** `O(n log n)`.
-   **Pior caso:** `O(n²)` (pivô ruim).
-   **In-place:** sim, na versão clássica.
-   **Estável:** não.
-   **Uso:** muito usado na prática; `qsort` da biblioteca `stdlib` é
    baseado nele, com otimizações.

``` c
int particiona(int v[], int ini, int fim) {
    int pivo = v[fim]; // pivô: último elemento
    int i = ini - 1;

    for (int j = ini; j < fim; j++) {
        if (v[j] <= pivo) {
            i++;
            int t = v[i];
            v[i] = v[j];
            v[j] = t;
        }
    }

    int t = v[i + 1];
    v[i + 1] = v[fim];
    v[fim] = t;
    return i + 1;
}

void quickSort(int v[], int ini, int fim) {
    if (ini < fim) {
        int p = particiona(v, ini, fim);
        quickSort(v, ini, p - 1);
        quickSort(v, p + 1, fim);
    }
}
```

## 11. Comparativo geral dos algoritmos

  -------------------------------------------------------------------------------
  Algoritmo      Melhor caso     Caso médio      Pior caso      Memória Estável
                                                                  extra 
  ----------- -------------- -------------- -------------- ------------ ---------
  Bubble Sort         `O(n)`        `O(n²)`        `O(n²)`       `O(1)` Sim

  Selection          `O(n²)`        `O(n²)`        `O(n²)`       `O(1)` Não
  Sort                                                                  

  Insertion           `O(n)`        `O(n²)`        `O(n²)`       `O(1)` Sim
  Sort                                                                  

  Merge Sort    `O(n log n)`   `O(n log n)`   `O(n log n)`       `O(n)` Sim

  Quick Sort    `O(n log n)`   `O(n log n)`        `O(n²)`   `O(log n)` Não
  -------------------------------------------------------------------------------

## 12. Armadilhas comuns em C

1.  **Acesso fora dos limites:** `v[n]` causa comportamento indefinido.
2.  **Overflow no cálculo do meio:** `(ini + fim) / 2` pode estourar com
    vetores grandes; prefira `ini + (fim - ini) / 2`.
3.  **Esquecer `free` no Merge Sort:** provoca vazamento de memória.
4.  **Comparar `float` com `==`:** use tolerância, por exemplo
    `fabs(a - b) < 1e-9`.
5.  **Função comparadora de `qsort` incorreta:** retornar `a - b` usando
    ponteiros pode causar overflow.
6.  **Não verificar o retorno de `malloc`** em código robusto.
7.  **Quick Sort com pivô fixo em vetor ordenado:** pode chegar a
    `O(n²)`.

## 13. Aplicação prática: busca em base ordenada

**Cenário:** sistema de biblioteca com 500.000 livros identificados por
código ISBN.

-   Se os dados não estiverem ordenados, a busca linear (`O(n)`) é
    lenta.
-   Se forem mantidos ordenados, a busca binária (`O(log n)`) responde
    em aproximadamente 19 comparações.
-   **Trade-off:** manter a ordenação custa trabalho a cada inserção (ou
    exige uma estrutura como árvore).

**Reflexão:** escolher uma estrutura de dados é escolher *trade-offs*.

## 14. Roteiro do laboratório

1.  Implementar `buscaLinear` e `buscaBinaria` e comparar com vetores de
    tamanhos crescentes.
2.  Implementar `bubbleSort`, `selectionSort` e `insertionSort`.
3.  Implementar `mergeSort` e `quickSort`.
4.  Medir o tempo com `clock()` da `time.h` para `N = 1.000`, `10.000` e
    `100.000`.
5.  Comparar com `qsort`.
6.  Discutir os resultados em grupo.

**Entrega:** código + tabela de tempos + um parágrafo de conclusão.

------------------------------------------------------------------------

*Material: Curso de Análise e Desenvolvimento de Sistemas --- SENAC.
Professor Matheus Magalhães.*
