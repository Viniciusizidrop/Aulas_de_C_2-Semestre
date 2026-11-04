# Lista X3 - Lista de Revisão de Ponteiros

## 1. Responda de forma objetiva:

a) O que é um ponteiro?
    É uma variavel que aponta para o endereço de outra variavel

b) Qual a diferença entre os operadores `&` e `*`?
    & - Retorna o endereço de uma variavel
    * - acessa ou modifica o valor que esta no endereço

c) Por que é perigoso declarar `int *p;` e depois fazer `*p = 5;`?
    Porque vai apontar para um endereço de memoria desconhecido(Ponteiro selvagem)

d) O que significa dizer que `*&x ≡ x`?
    Significa que você está anulando as duas operações de & e * e volta pra mesma variavel

## 2. Considere o código abaixo:

```c
#include <stdio.h>

int main(void) {
    int x = 42;
    int *p = &x;

    printf("A: %d\n", x);
    printf("B: %d\n", *p);
    printf("C: %p\n", (void*)&x);
    printf("D: %p\n", (void*)p);

    *p = 100;

    printf("E: %d\n", x);

    return 0;
}
```

a) O que será impresso em A e B?
    A=42 | B=42

b) As saídas C e D serão iguais ou diferentes? Justifique.
    C: referencia o valor do ponteiro de X
    D: chama o valor do P que guarda X

c) Qual será o valor impresso em E? Explique o motivo.
    E=100. Porque o valor do endereço apontado foi alterado e a variavel tambem é alterada

## 3. Escreva uma função:

```c
void dobra(int *x);
```

Que dobra o valor apontado por `x`. Em seguida, escreva um `main` que:

1. Declare uma variável `int n = 7;`.
2. Chame `dobra(&n);`.
3. Imprima o valor de `n` antes e depois da chamada.

Codigo:
```c
#include <stdio.h>
//Questão 3
void DobraX(int *x){
    int X = *x;
   int dobra = X * 2;
   *x = dobra ;
    
}

int main(){
    int n = 7;
    DobraX(&n);
    printf("%d\n", n);
}
```

**Pergunta extra:** Por que essa função não funcionaria se o parâmetro fosse `void dobra(int x)`?
    por que usa um valor copiado que fica somente na função e não um ponteiro que altera o valor do endereço

## 4. Analise as duas funções abaixo:

```c
void trocaErrada(int a, int b) {
    int t = a;
    a = b;
    b = t;
}

void troca(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
```

a) Explique por que `trocaErrada` não troca os valores das variáveis originais.
    por que não aponta para ponteiros e dentro de uma função void não retornara nada assim

b) Complete o `main` abaixo para que `x` e `y` sejam trocados usando `troca`:


```c
int main() {
        int x = 1;
        int y = 2;
        troca(&x,&y);
        printf("X=%d ",x);
        printf("Y=%d",y);

    return 0;
}
```

c) Qual a saída do `printf` se, em vez de chamar `troca`, chamarmos `trocaErrada(x, y)`?
    X=1 | Y=2

## 5. Considere:

```c
int v[5] = {10, 20, 30, 40, 50};
int *p = v;
```

a) O que é impresso por `printf("%d\n", *(p + 3));`?
    40

b) O que é impresso por `printf("%d\n", p[4]);`?
    50

c) Escreva um laço usando apenas ponteiros (sem índice `i`) que calcule a soma de todos os elementos do vetor.
```c
#include <stdio.h>

int main(){

int v[5] = {10, 20, 30, 40, 50};
int *p = v;

int soma = 0;
for (int *ptr = v; ptr < v + 5; ptr++){
    soma += *p
}
printf("soma total: %d",soma)
```


}

d) Explique por que `v[i]` é equivalente a `*(v + i)`.
    v[i] e a localização direta do vetor
    *(v + i) e um ponteiro que vai no vetor
    
e) Se `p` aponta para `v[0]` e `q` aponta para `v[3]`, quanto vale `q - p`? E por que não é simplesmente a diferença de endereços em bytes?
    p = v[0] | q = v[3]  |  q - p = 3
    Isso acontece porque a subtração entre ponteiros do mesmo vetor retorna a quantidade de elementos que existe entre eles, e não a diferença em bytes.


## 6. Escreva uma função:

```c
int contaConsoantes(const char *s);
```

Que conta quantas consoantes existem em uma string, percorrendo-a caractere a caractere com ponteiro (sem usar `strlen` nem índices).

a) Implemente a função completa.
Codigo:
```c
#include <stdio.h>

// Questão 6
int contaConsoantes(const char *s) {
    int c = 0;

    while (*s) {
        char ch = *s;
        
        if ((ch >= 'a' && ch <= 'z') ||
            (ch >= 'A' && ch <= 'Z')) {

            if (ch != 'a' && ch != 'e' && ch != 'i' &&
                ch != 'o' && ch != 'u' &&
                ch != 'A' && ch != 'E' && ch != 'I' &&
                ch != 'O' && ch != 'U') {

                c++;
            }
        }

        s++;
    }

    return c;
}

int main() {
    char palavra[] = "Programacao";

    printf("Quantidade de consoantes: %d\n",
           contaConsoantes(palavra));

    return 0;
}
```

b) Explique o papel do `const` no parâmetro.
    variavel constate que nunca tera seu valor alterado apos sua inicialização

c) Explique por que o laço `while (*s)` funciona para percorrer a string (relacione com o `'\0'`).
    O laço while (*s) percorre a string caractere por caractere utilizando o ponteiro. Ele continua enquanto encontrar caracteres diferentes de '\0', que indica o final da string. Quando encontra esse caractere, o laço é encerrado.

## 7. Escreva um programa completo em C que:

**7.1.** Leia um inteiro `n` do usuário (tamanho do vetor).


**7.2.** Aloque dinamicamente um vetor de `n` inteiros com `malloc`.

**7.3.** Verifique se a alocação falhou.

**7.4.** Leia `n` valores do usuário.

**7.5.** Calcule e imprima a média dos valores.

**7.6.** Libere a memória com `free` e anule o ponteiro.

a) Escreva o código completo.
```c
#include <stdio.h>
#include <stdlib.h>
//Questão 7
int main(void) {
    int n;

    printf("Quantos valores? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Entrada invalida.\n");
        return 1;
    }

    int *v = malloc(n * sizeof(int));
    if (v == NULL) {
        printf("Erro: falha na alocacao de memoria.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    double soma = 0;
    for (int i = 0; i < n; i++) {
        soma += v[i];
    }
    printf("Media: %.2f\n", soma / n);

    free(v);
    v = NULL;   // evita ponteiro pendente

    return 0;
}

```

b) Explique o que é um *dangling pointer* e como a atribuição `v = NULL;` após o `free` ajuda a evitar esse problema.
    quando aponta para um endereço que ja foi liberado pelo free    

c) O que é um *memory leak* (vazamento de memória)? O que aconteceria se esquecermos o `free`?
    Se esquecermos de usar free(), a memória continuará reservada, mesmo que não seja mais necessária, podendo causar desperdício de memória e diminuir o desempenho do programa.

---

**Bons estudos!**