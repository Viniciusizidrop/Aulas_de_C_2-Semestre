//1. O Contador de Passos
//Escreva um programa que use uma estrutura de repetição para ler a quantidade de passos dados
//em cada minuto (totalizando 10 entradas). Ao final, o programa deve exibir o total de passos
//acumulados e a média de passos por minuto.

#include <stdio.h>
int main(){
    int passos,total=0;
    float media;

    for(int i = 1; i<=10;i++){
        printf("Digite a quantidade de passos no minuto %d: ",i);
        scanf("%d", &passos);
        total += passos;

    }
    media = total / 10;
    printf("O total de passos foi: %d, e sua media foi de: %.2f\n",total,media);

}