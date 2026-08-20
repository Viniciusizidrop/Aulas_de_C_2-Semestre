#include <stdio.h>

int main() {
    int numero;
    int resto50;
    int resto20;
    int resto10;
    int resto5;
    int restou;
    int sobra50;
    int sobra20;
    int sobra10;
    int sobra5;


    printf("Digite o valor a ser sacado: ");
    scanf("%d", &numero);

    
    
    resto50 = numero / 50;
    sobra50 = numero - (resto50 * 50); //isso e o resto da divisão não precisa escrever a equação toda

    resto20 = sobra50 / 20;
    sobra20 = resto20 - (resto20 * 20);

    resto10 = sobra20 / 10;
    sobra10 = resto10 - (resto10 * 10);

    resto5 = sobra10 / 5;
    sobra5 = resto5 - (resto5 * 5);

    restou = sobra5 / 1;

     
    printf("%d, %d, %d, %d,",sobra50,sobra20,sobra10,sobra5);
    printf("notas de 50: %d, notas de 20: %d, notas de 10: %d, notas de 5: %d",resto50,resto20,resto10,resto5);
    if (restou < 5){
        printf("%d", restou);
    }
    return 0;
}