#include <stdio.h>

int main(){
    float nota1;
    float nota2;
    float media;

    printf("Digite a nota1: ");
    scanf("%f", &nota1);

    printf("Digite a nota2: ");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2) / 2;

    printf("A media e %.2f. A nota1: %.2f. nota2: %.2f", media, nota1, nota2);
    return 0;
}

//Ctrl + S