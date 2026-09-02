//escreva um programa que:
//leia inteiros até que o o usuário digite 0.
//Conte e imprima quantos números pares e ímpares foram informados(desconsiderando o 0)
#include <stdio.h>
int main() {
    int n;
    int p=0,i=0;
    while(n!=0){
        printf("Digite um número: ");
        scanf("%d", &n);

        if(n%2==0 && n!=0){
            p++;
        }
        if(n%2!=0){
            i++;
        }
        
    }
    printf("N.Pares: %d, N.Impares: %d\n",p,i);
}