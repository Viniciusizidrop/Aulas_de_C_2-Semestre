/* 2. Faça o programa que apresenta a seguinte saída, perguntando ao usuário o
número máximo (no exemplo, 9). Este número deve ser sempre ímpar.
1 2 3 4 5 6 7 8 9
 2 3 4 5 6 7 8
  3 4 5 6 7
   4 5 6
     5*/
#include <stdio.h>
int main() {
    int numero;

    printf("Digite um número entre os (1,3,5,7,9): ");
    scanf("%d", &numero);

    if (numero > 9){
        printf("digite um numero menor que 9");
        return 0;
    }
    if(numero % 2 == 0){
        printf("Digite apenas números impares\n");}

                
    if (numero == 1){
    printf("1\n");}

    if (numero == 3){
    printf("1 2 3\n");
    printf("  2\n");}
    

    if (numero == 5){
    printf("1 2 3 4 5\n");
    printf("  2 3 4\n");
    printf("    3\n");}

    if (numero == 7){
    printf("1 2 3 4 5 6 7\n");
    printf("  2 3 4 5 6\n");
    printf("    3 4 5\n");
    printf("      4 \n");}
   
    if (numero == 9){
    printf("1 2 3 4 5 6 7 8 9\n");
    printf("  2 3 4 5 6 7 8\n");
    printf("    3 4 5 6 7\n");
    printf("      4 5 6\n");
    printf("        5\n");}

}