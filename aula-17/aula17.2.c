#include <stdio.h>
//Questão 2
int buscaBinaria(int v[], int n, int chave) {
    int ini = 0, fim = n - 1;
    while (ini <= fim) {
        printf("inicio: %d\n",ini);
        int meio = ini + (fim - ini) / 2;  // evita overflow
        printf("meio: %d\n",meio);
        if (v[meio] == chave) return meio; 
        else if (v[meio] < chave) ini = meio + 1;
        
        else fim = meio - 1;
        printf("fim: %d\n\n",fim);
    }
    return -1;
}

int main(){
    int v[] = {3, 8, 15, 21, 34, 55, 89};
    buscaBinaria(v,7,89);//21
}