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