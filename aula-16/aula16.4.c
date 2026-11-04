#include <stdio.h>
//Questão 5
//c) Escreva um laço usando apenas ponteiros (sem índice `i`) que calcule a soma de todos os elementos do vetor.
int main(){
    int v[5] = {10, 20, 30, 40, 50};
    int *p = v;
    int soma = 0;
    while(p < v + 5) {
        soma += *p;
        p++;
    }
    printf("Soma total: %d",soma);

}