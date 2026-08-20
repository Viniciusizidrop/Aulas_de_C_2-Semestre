#include <stdio.h>

int main(){
    int ano;
    int calculo;
     
    printf("digite o ano: ");
    scanf("%d", &ano);
    calculo = (ano / 4) && !(ano / 100) || (ano / 400);
    printf("a %d",calculo);

    return 0;
}