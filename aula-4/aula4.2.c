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
    sobra50 = numero % 50;

    resto20 = sobra50 / 20;
    sobra20 = sobra50 % 20;

    resto10 = sobra20 / 10;
    sobra10 = sobra20 % 10;

    resto5 = sobra10 / 5;
    sobra5 = sobra10 % 5;

    restou = sobra5 / 1;

     
    //printf("%d, %d, %d, %d,",sobra50,sobra20,sobra10,sobra5);
    printf("notas de 50: %d, notas de 20: %d, notas de 10: %d, notas de 5: %d \n",resto50,resto20,resto10,resto5);
    if ((restou < 5) && (restou > 0)){
        printf("um total de R$ %d não pode ser sacado\n", restou);
    }
    return 0;
}