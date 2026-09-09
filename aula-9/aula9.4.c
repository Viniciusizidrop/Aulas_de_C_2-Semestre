/*Exercício 2: Calculadora de Imposto de Renda e Alíquota Efetiva Simplificada
--------------------------------------------------------------------------------
Contexto: O cálculo do Imposto de Renda Retido na Fonte (IRRF) utiliza faixas de
renda e deduções fixas para cada faixa.
Enunciado: Crie um programa que leia o salário bruto mensal de um trabalhador e
calcule o imposto devido com base nas seguintes regras compostas:
- Até R$ 2.259,20: Isento (0% de imposto)
- De R$ 2.259,21 até R$ 2.826,65: Alíquota de 7.5% (Dedução de R$ 169,44)
- De R$ 2.826,66 até R$ 3.751,05: Alíquota de 15% (Dedução de R$ 381,44)
- De R$ 3.751,06 até R$ 4.664,68: Alíquota de 22.5% (Dedução de R$ 662,77)
- Acima de R$ 4.664,68: Alíquota de 27.5% (Dedução de R$ 896,00)
Cálculo: O imposto é calculado como: (Salário Bruto * Alíquota) - Dedução.
Saída do Programa:
Exiba o Salário Bruto, o Valor do Imposto a ser pago e a Alíquota Efetiva Real
(que é a porcentagem real que o imposto representa do salário bruto:
(Imposto / Salário Bruto) * 100). Formate com duas casas decimais.*/
#include <stdio.h>
int main(){
    float salario,imposto;

    printf("Digite seu salario: ");
    scanf("%f",&salario);

    if(salario<=2259.20){
        printf("Isento, 0%% de imposto");
    }
    else if(salario<=2826.65){
        imposto = 0.075 * salario;
        printf("Alíquota de 7.5%%\n");
        printf("Dedução de %.2f\n",imposto);
        salario -=imposto;
        printf("Salario final: %.2f",salario);
    }
    else if(salario<=3751.05){
        imposto = 0.15 * salario;
        printf("Alíquota de 15\n%%");
        printf("Dedução de %.2f\n",imposto);
        salario -=imposto;
        printf("Salario final: %.2f",salario);
    }
    else if(salario<=4664.68){
        imposto = 0.225 * salario;
        printf("Alíquota de 22.5%%\n");
        printf("Dedução de %.2f\n",imposto);
        salario -=imposto;
        printf("Salario final: %.2f",salario);
    }
    else{
        imposto = 0.275 * salario;
        printf("Alíquota de 27.5%%\n");
        printf("Dedução de %.2f\n",imposto);
        salario -=imposto;
        printf("Salario final: %.2f",salario);
    }
    return 0;
}