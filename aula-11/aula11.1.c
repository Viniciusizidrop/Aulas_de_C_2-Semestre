#include <stdio.h>
#include "aula11.2.h"
//gcc aula11.1.c aula11.2.c -o bomdia && .\bomdia

void imprimeBomdia();//prototipo
void imprimeBoanoite();



int main(){
    imprimeBomdia();
    float valorSalario = 1621;
    printf("O valor do salario em real eh: R$%.2f, e em dolar eh: $%.2f\n",valorSalario,convertePdolar(valorSalario));

    float p = retornaPi();
    printf("O valor de PI eh: %f\n",p);
    imprimePi();

     return 0;
}

void imprimeBomdia(){
    printf("Bom dia!\n");
    //função void não tem return
}

void imprimeBoanoite(){
    printf("Boa noite!");
}