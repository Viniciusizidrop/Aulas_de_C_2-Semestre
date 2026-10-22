# Lista x1 — Introdução e Manipulação de Ponteiros

**Página 1 de 2**

## 1. Diferença entre `&` e `*` no contexto de ponteiros

Explique a diferença entre os operadores `&` e `*` no contexto de ponteiros. Em seguida, analise o código e diga o que será impresso:

```c
int x = 42;
int *p = &x;

printf("%d\n", *p);

*p = 100;

printf("%d\n", x);
```

## 2. Atribuição e manipulação de ponteiros

Considere o código:

```c
int a = 10, b = 20;

int *p1 = &a, *p2 = &b;

*p1 = *p2;

p2 = p1;

printf("%d %d\n", a, b);
```

Qual será a saída? Explique por que `b` muda ou não muda de valor.

## 3. Troca de valores usando ponteiros

Implemente uma função `void troca(int *a, int *b)` que troque os valores de duas variáveis inteiras.

Escreva uma função `main` que leia dois números, chame a função e imprima o resultado.

Explique por que a passagem por ponteiro é necessária para que a troca tenha efeito fora da função.

## 4. Aritmética de ponteiros e vetores

Dado o código:

```c
int v[5] = {10, 20, 30, 40, 50};
int *p = v;
```

Responda:

**a)** O que `*(p + 2)` retorna?

**b)** O que `p[3]` retorna?

**c)** Após `p++`, qual será o valor de `*p`?

**d)** Por que `p + 1` avança 4 bytes (em uma arquitetura típica na qual `int` ocupa 4 bytes) e não 1 byte?

## 5. Alocação dinâmica de memória com `malloc`

Escreva um programa que:

**a)** Aloque dinamicamente um vetor de `n` inteiros (`n` lido do usuário) usando `malloc`.

**b)** Preencha o vetor com valores lidos pelo usuário.

**c)** Calcule a média usando um ponteiro.

**d)** Libere a memória com `free`.

Explique o que acontece se `malloc` retornar `NULL` e como tratar esse caso.

## 6. Ponteiros não inicializados e erros de código

Analise o código abaixo e responda: há algum erro? Qual? Como corrigir?

```c
#include <stdio.h>

void preenche(int *v, int n) {
    for (int i = 0; i < n; i+) 
        v[i] = i * 2;
}

int main() {
    int *v;

    preenche(v, 5);

    printf("%d\n", v[4]);

    return 0;
}
```

Explique os conceitos de **ponteiro não inicializado** e **dangling pointer**. Em seguida, reescreva a função `main` de forma correta, utilizando `malloc` ou um vetor estático.