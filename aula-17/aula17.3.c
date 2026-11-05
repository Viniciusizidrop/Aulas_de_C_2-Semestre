#include <stdio.h>
//Questão 3 //falta terminrar
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

int main(){
   int v[] = {42,17,93,8,55};
   bubbleSort(v,5);
}