/*Exercício 1: Simulador de Sistema de Financiamento Imobiliário (SCORE + Renda)
--------------------------------------------------------------------------------
Contexto: Um banco digital utiliza um algoritmo para aprovar ou recusar linhas de
crédito imobiliário com base na renda do cliente, no valor da parcela e no score de
crédito do Serasa.
Enunciado: Escreva um programa em C que receba as seguintes entradas:
- Renda mensal bruta do solicitante (float)
- Valor total do imóvel (float)
- Número de parcelas desejadas (int)
- Score de crédito do cliente (int, de 0 a 1000)
Regras de Negócio:
1. O valor da parcela mensal não pode ultrapassar 30% da renda mensal bruta.
2. Se o Score for menor que 400, o financiamento é REPROVADO imediatamente.
3. Se o Score estiver entre 400 e 699, o financiamento só é aprovado se o valor da
parcela for de no máximo 20% da renda bruta (condição mais rigorosa).
4. Se o Score for de 700 ou mais, o financiamento é APROVADO, desde que respeite a
regra padrão de 30% da renda.
Saída do Programa:
O programa deve calcular o valor da parcela (considere sem juros para simplificar:
Valor do Imóvel / Parcelas) e exibir o status final: "Financiamento Aprovado" ou
"Financiamento Recusado", justificando o motivo em caso de recusa (ex: "Score muito
baixo" ou "Comprometimento de renda excessivo").*/
#include <stdio.h>
int main(){
    float rendamensal,totalimovel;
    int nparcelas,score;
    float parcelamensal;

    printf("Digite sua renda mensal: ");
    scanf("%f",&rendamensal);
    printf("Digite o valor total do imovel: ");
    scanf("%f",&totalimovel);
    printf("Digite a quantidade de parcelas desejadas: ");
    scanf("%d",&nparcelas);
    printf("Digite seu score de credito (0 a 1000)");
    scanf("%d",&score);

    parcelamensal = totalimovel / nparcelas;

    if(parcelamensal>(rendamensal*0.3)){
        printf("Financiamento Recusado, Comprometimento de renda excessivo\n");
    }
    if(score<400){
        printf("Financiamento Recusado, Score muito baixo\n");
    }
    if(score>400 && score<699 && parcelamensal<(rendamensal*0.2)){
        printf("Financiamento Aprovado\n");
    }
    if(score>700 && parcelamensal<(rendamensal*0.3)){
        printf("Aprovado\n");
    }
    return 0;

}