/*Exercício 1: Crie um programa em C que leia três valores reais representando os lados de um triângulo.
Primeiro, o programa deve verificar se esses lados podem efetivamente formar um triângulo (a
soma de dois lados deve ser sempre maior que o terceiro). Caso formem, classifique-o e exiba
uma mensagem na tela indicando se ele é: */
#include <stdio.h>

int main() {
    int lado1;
    int lado2;
    int lado3;

    printf("digite o lado 1 do triangulo ");
    scanf("%d", &lado1);
    printf("digite o lado 2 do triangulo ");
    scanf("%d", &lado2);
    printf("digite o lado 3 do triangulo ");
    scanf("%d", &lado3);

    if((lado1 == lado2) && (lado1 == lado3) && (lado2 == lado3)){
        printf("o seu triangulo e equilatero\n");
    }

    else if((lado1 + lado2 < lado3) || (lado2 + lado3 < lado1) || (lado1 + lado3 < lado2)){
        printf("error \n");
    }

    else if((lado1 != lado2) && (lado1 != lado3) && (lado2 != lado3)){
        printf("seu triangulo e um escaleno\n");
    }
    
    else if((lado1 == lado2 != lado3) || (lado1 != lado2 == lado3)){
        printf("o seu triangulo e isosceles\n");

    }

    return 0;
}