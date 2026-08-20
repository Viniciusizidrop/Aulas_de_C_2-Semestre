#include <stdio.h>

int main(){
    float salario;
    float calculo;
    float bruto;
    printf("digite o seu salario: ");
    scanf("%f", &salario);

    if (salario <= 2000){
        printf("sem imposto %.2f",salario);
    }
    else if (2000 < salario && salario < 4000 ){
        calculo = salario * 0.15;
        bruto = salario - calculo;
        printf("15 de imposto %.2f e seu salario bruto e de %.2f", calculo, bruto);
    }

    else if (salario > 4000){
        calculo = salario * 0.225 + 300;
        bruto = salario -  calculo;
        printf("22.5 de imposto variavel + imposto fixo de 300: %.2f e seu salario bruto e de %.2f", calculo, bruto);

    return 0;
    }
}