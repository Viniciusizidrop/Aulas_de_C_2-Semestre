//do while e o inverso do while normal ele inverte a logica executa primeiro e ve se e verdadeira dps executa ao menos 1 vez se for falsa para
#include <stdio.h>

int main() {
    int opcao;
    do{
        printf("Digite um numero de 1 a 3: ");
        scanf("%d", &opcao);

        if(opcao==1){
            printf("vc escolheu a opcao 1\n");
        }
        else if(opcao==2){
            printf("vc escolheu a opcao 2\n");
        }
        else{
            printf("numero invalido digite outro\n");
        }
        //corpo do loop
    } while(opcao!=3);//condição
        printf("saindo do sistema...\n");
}