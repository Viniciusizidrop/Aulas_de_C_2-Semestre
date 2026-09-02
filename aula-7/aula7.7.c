//escreva um programa que:
//leia 10 notas (0 a 10)
//calcule e imprima a média, a maior e a menor nota.
#include <stdio.h>
int main(){
    float notas,nota;
    float media,menor,maior,soma;
    for(int i=1; i<=10;i++){
        printf("Digite uma nota: ");
        scanf("%f",&notas);

        soma += notas;
        if(notas < nota){
            menor = notas;
        }
        if(notas > nota){
            maior = notas;
        }
        media = soma / 10;
        nota = notas;
    }
    printf("A menor nota é: %f, A maior é %f, é a Media é %f ",menor,maior,media);

}