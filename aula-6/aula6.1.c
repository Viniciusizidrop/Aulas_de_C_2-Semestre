/*1. Escreva um programa que leia 3 notas de um aluno e a média das notas dos
exercícios realizados por ele. Calcular a média de aproveitamento, usando a
fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar o conceito
de acordo com a tabela:
maior ou igual a 9 A
maior ou igual a 7.5 e menor que 9 B
maior ou igual a 6 e menor que 7.5 C
maior ou igual a 4 e menor que 6 D
menor que 4 E*/
#include <stdio.h>

int main(){
    float nota1,nota2,nota3;
    float ma,me;

    printf("digite a nota1: ");
    scanf("%f", &nota1);

    printf("Digite a nota2: ");
    scanf("%f", &nota2);

    printf("Digite a nota3: ");
    scanf("%f", &nota3);

    me = (nota1 + nota2 + nota3) / 3;
    ma = (nota1 + nota2*2 + nota3*3 + me)/7;
    printf("MA: %.1f \n",ma);

    if(nota1>10 || nota2>10 || nota3>10){
        printf("A nota não pode ser maior que 10.");
        return 0;
    }
    if(ma>=9){
        printf("Nota A\n");
    }
    if (ma>=7.5 && ma<9 ){
        printf("Nota B\n");
    }
    if(ma>=6 && ma<7.5){
        printf("Nota C\n");
    }
    if(ma>=4 && ma<6){
        printf("Nota D\n");
    }
    if(ma<4){
        printf("Nota E\n");
    }
    return 0;
}