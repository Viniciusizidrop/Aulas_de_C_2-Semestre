#include <stdio.h>
//Calcular a PA,onde o usuario vai entrar com: O primeiro termo da PA, A razao da PA, e a quantidade de termos a ser calculado.
int calcula_pa(int PrimeiroTermo,int razao,int quantos_termos){
    int termo_atual = PrimeiroTermo;

    for (int i = 1;i<=quantos_termos; i++ ){
        printf("pa: %d ",termo_atual);
        termo_atual += razao;

    }
    return 0;
}

int calcula_pg(int PrimeiroTermo,int razao,int quantos_termos){
    int termo_atual = PrimeiroTermo;

    for (int i = 1;i<=quantos_termos; i++ ){
        printf("pg: %d ",termo_atual);
        termo_atual *= razao;

    }
    return 0;
}




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
        return -1;
    }
    else{
        calcula_pa(PrimeiroTermo,razao,quantos_termos);
        printf("\n------------------------------------------\n");
        calcula_pg(PrimeiroTermo,razao,quantos_termos);


    return 0;}
    }




