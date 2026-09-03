//5. O Investimento de Longo Prazo
// Escreva um programa que receba um valor inicial investido, uma taxa de juros anual (em %) e a
// quantidade de anos que o dinheiro ficará rendendo. Utilizando um laço, calcule e exiba o saldo
// da conta ano a ano, mostrando o crescimento do patrimônio.
#include <stdio.h>
int main(){
    float taxa;
    int anos;
    float investido;
    float juros;

    printf("Digite o valor inicial investido: ");
    scanf("%f",&investido);
    printf("digite a taxa de juros anual: ");
    scanf("%f",&taxa);
    printf("Digite a quantidade de anos a ser investida: ");
    scanf("%d", &anos);

    taxa /=100;
    for(int i = 1; i<=anos;i++){
        juros = investido * taxa;
        investido += juros;
    }
    printf("total do investimento: %f\n",investido);
}