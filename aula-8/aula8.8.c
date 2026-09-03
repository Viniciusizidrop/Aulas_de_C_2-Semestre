//8. Desenhando com asteriscos
// Escreva um programa que peça ao usuário para digitar o tamanho da base de um triângulo (um
// número inteiro). O programa deve usar laços de repetição aninhados (um dentro do outro) para
// desenhar um triângulo retângulo feito de asteriscos (*).
// Exemplo se a entrada for 4:
// *
// **
// ***
// ****
#include <stdio.h>
int main(){
    int base;
    printf("Digite qual será o tamanho da base do triangulo: ");
    scanf("%d", &base);

    for(int linha=1;linha<=base;linha++){
        for(int i=1;i<=linha;i++){
        if(linha==1 || linha<=i){
            printf("*\n");
        }
        else{
            printf("*");
        }


    }
    }
}