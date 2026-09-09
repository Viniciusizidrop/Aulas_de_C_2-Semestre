//Calculadora de imc
#include <stdio.h>
int main(){
    float imc;
    float peso,altura;

    printf("Digite o peso(KG): ");
    scanf("%f",&peso);
    printf("Digite sua altura(M): ");
    scanf("%f",&altura);

    imc = peso / (altura * altura);

    printf("seu imc e de %.2f\n",imc);
    if (imc<18.5){
        printf("Abaixo do peso");
    }
    else if (imc<24.9){
        printf("Peso adequado");
    }
    else if(imc<29.9){
        printf("Sobrepeso");
    }
    else{
        printf("Obesidade");
    }
}