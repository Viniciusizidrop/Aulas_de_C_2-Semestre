#include <stdio.h>

int main(){
    int ano;
    int calculo;
     
    printf("digite o ano: ");
    scanf("%d", &ano);

    if (ano % 400 == 0){
        printf("ano bissexto\n");}
    else if(ano % 100 == 0) {
        printf("não e bissexto\n");}
    else if(ano % 4 == 0) {
        printf("esse ano e bissexto\n");}
    else{
        printf("Error\n");}
        return 0;
        }
    

