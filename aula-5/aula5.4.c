#include <stdio.h>
//Calcular a PA,onde o usuario vai entrar com: O primeiro termo da PA, A razao da PA, e a quantidade de termos a ser calculado.

int main() {
    int PrimeiroTermo;
    int razao;
    int quantos_termos;

    printf("Digite o primeiro termo: ");
    scanf("%d", &PrimeiroTermo);

    printf("Digite a razão a ser calculada: ");
    scanf("%d", &razao);

    printf("digite quantos termos há mais o calculo terá: ");
    scanf("%d", &quantos_termos);

    if(quantos_termos<=0){
        printf("Error: Macho digite um Número Maior que 0\n");
    }
    else{
    //for(PrimeiroTermo; PrimeiroTermo <= quantos_termos; PrimeiroTermo + razao){
    printf("O 1° termo é: %d\n",PrimeiroTermo);
    for(int i = 1; i<=quantos_termos; i++){
        PrimeiroTermo += razao; // PrimeiroTermo = PrimeiroTermo + razao
        printf("O %d° termo é: %d\n",i+1,PrimeiroTermo);}

    return 0;}
    }




