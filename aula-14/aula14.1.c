//escreva um trecho de codigo em c que use aninhamento de estruturas de controle para verificar se um numero inteiro N esta entre 1 e 100, e se estiver, informar se e par ou impar
//gcc aula14.1.c -o remember && ./remember
#include <stdio.h>
int main(){
    int n;
    printf("Digite um numero de 1 a 100: ");
    scanf("%d", &n);

    if(n>=1 && n<=100) {
        int par = n%2;
        if (n==2) {
            printf("O 2 é par");
        }

        else if(par == 0){
            printf("O %d é par",n);
        }
        else{
            printf("O %d e impar", n);
        }
    }
    else{
        printf("O numero digitado não esta entre 1 e 100");
    }
    return 0;
}