#include "aula15.2.h"
#include <stdio.h>
//gcc aula15.1.c aula15.2.c -o big_o && .\big_o
int main() {
    int chave = 30;
    // int v[] = {10, 20, 30, 40, 50};
    // int n = 5;
    int v[] = {50, 20, 60, 40, 10, 30 , 5};
    int n = 7;

// buscaLinear(int v[] = vetor, int n = quantidade de elementos, int chave = valor procurado)
printf("Posicao encontrada com buscaLinear: %d\n", buscaLinear(v, n, chave));

// buscaBinaria(int v[] = vetor ordenado, int n = quantidade de elementos, int chave = valor que deseja encontrar)
printf("Posicao encontrada com buscaBinaria: %d\n", buscaBinaria(v, n, chave));

// buscaBinariaRec(int v[] = vetor ordenado, int ini = índice inicial, int fim = índice final, int chave = valor que deseja encontrar)
printf("Posicao encontrada com buscaBinariaRec: %d\n", buscaBinariaRec(v, 0, n-1, chave));

// bubbleSort(int v[] = vetor que será ordenado, int n = quantidade de elementos)
bubbleSort(v, n);

printf("Vetor ordenado com bubbleSort: ");
for (int i = 0; i < n; i++) {
    printf("%d ", v[i]);
}
printf("\n");


// selectionSort(int v[] = vetor que será ordenado, int n = quantidade de elementos)
selectionSort(v, n);

printf("Vetor ordenado com selectionSort: ");
for (int i = 0; i < n; i++) {
    printf("%d ", v[i]);
}
printf("\n");


// insertionSort(int v[] = vetor que será ordenado, int n = quantidade de elementos)
insertionSort(v, n);

printf("Vetor ordenado com insertionSort: ");
for (int i = 0; i < n; i++) {
    printf("%d ", v[i]);
}
printf("\n");


// merge(int v[] = vetor, int ini = início da primeira metade, int meio = final da primeira metade, int fim = final da segunda metade)
merge(v, 0, 1, 3);//manual

printf("Vetor apos a intercalacao com merge: ");
for (int i = 0; i < 4; i++) {
    printf("%d ", v[i]);
}
printf("\n");


// mergeSort(int v[] = vetor que será ordenado, int ini = índice inicial, int fim = índice final)
mergeSort(v, 0, n - 1);

printf("Vetor ordenado com mergeSort: ");
for (int i = 0; i < n; i++) {
    printf("%d ", v[i]);
}
printf("\n");


// particiona(int v[] = vetor que será particionado, int ini = índice inicial, int fim = índice final)
printf("Posicao do pivo apos particiona: %d\n", particiona(v, 0, n - 1));


// quickSort(int v[] = vetor que será ordenado, int ini = índice inicial, int fim = índice final)
quickSort(v, 0, n - 1);

printf("Vetor ordenado com quickSort: ");
for (int i = 0; i < n; i++) {
    printf("%d ", v[i]);
}
printf("\n");

    return 0;
}