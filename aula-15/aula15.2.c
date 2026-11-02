#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int buscaLinear(int v[], int n, int chave) {
    for (int i = 0; i < n; i++) {
        if (v[i] == chave)
            return i;      // encontrado: retorna índice
    }
    return -1;             // não encontrado
}

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

int buscaBinariaRec(int v[], int ini, int fim, int chave) {
    if (ini > fim) return -1;
    int meio = ini + (fim - ini) / 2;
    if (v[meio] == chave) return meio;
    if (v[meio] < chave)
        return buscaBinariaRec(v, meio + 1, fim, chave);
    return buscaBinariaRec(v, ini, meio - 1, chave);
}

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
