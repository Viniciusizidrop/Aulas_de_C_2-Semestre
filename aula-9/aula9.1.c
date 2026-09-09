//Introdução basica ao case switch
#include <stdio.h>
int main(){
    int opcao;

    printf("Escolha de 1 a 3: ");
    scanf("%d",&opcao);

    switch(opcao){
    case 1:
    printf("1\n");
    break;
    case 2:
    printf("2\n");
    break;
    case 3:
    printf("3\n");
    break;
    default:
    printf("Opção Invalida\n");
    }
    return 0;
}