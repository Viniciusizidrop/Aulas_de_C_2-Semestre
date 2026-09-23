#include <stdlib.h>
#include <stdio.h>
#include <time.h>
 void executa_cpf() {
    int cpf[9]; 
    int soma1 = 0, soma2 = 0;
    int resto1, resto2;
    int dv1, dv2;
    // Laço 'for' para ler os 9 dígitos do CPF
    for (int i = 0; i < 9; i++) {
        printf("Digite o %dº numero do CPF:\n", i + 1);
        scanf("%d", &cpf[i]);}
  
    for (int i = 0; i < 9; i++) {
        soma1 += cpf[i] * (10 - i); // Multiplica de '10 a 2
        soma2 += cpf[i] * (11 - i);} // Multiplica de 11 a 3

    // Cálculo do primeiro dígito verificador (dv1)
    resto1 = soma1 % 11;
    if (resto1 < 2) {dv1 = 0;} 
    else {dv1 = 11 - resto1;}
    printf("O dv1 do CPF eh: %d\n", dv1);

    // Adiciona o dv1 no cálculo da segunda soma (multiplicado por 2)
    soma2 += dv1 * 2;

    // Cálculo do segundo dígito verificador (dv2)
    resto2 = soma2 % 11;
    if (resto2 < 2) {dv2 = 0;} 
    else {dv2 = 11 - resto2;}
    printf("O dv2 do CPF eh: %d\n", dv2);

}

void gera_cpf(){
    srand(time(NULL));
    for(int i=1; i<=9; i++){
        int n = rand() % 10;
        printf("O numero%d gerado eh: %d\n",i,n);
    }
}
