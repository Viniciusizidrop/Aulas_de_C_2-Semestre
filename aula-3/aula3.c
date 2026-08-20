#include <stdio.h>
//https://clubes.obmep.org.br/blog/a-matematica-nos-documentos-a-matematica-dos-cpfs/
int main() {
    int d1,d2,d3,d4,d5,d6,d7,d8,d9;
    int soma1,soma2;
    int resto1,resto2;
    int dv1,dv2;

    printf("Digite o primeiro digito do CPF: ");
    scanf("%d", &d1);

    printf("Digite o segundo digito do CPF: ");
    scanf("%d", &d2);

    printf("Digite o terceiro digito do CPF: ");
    scanf("%d", &d3);

    printf("Digite o quarto digito do CPF: ");
    scanf("%d", &d4);

    printf("Digite o quinto digito do CPF: ");
    scanf("%d", &d5);

    printf("Digite o sexto digito do CPF: ");
    scanf("%d", &d6);

    printf("Digite o setimo digito do CPF: ");
    scanf("%d", &d7);

    printf("Digite o oitavo digito do CPF: ");
    scanf("%d", &d8);

    printf("Digite o nono digito do CPF: ");
    scanf("%d", &d9);

    soma1 = (d1*10) + (d2*9) + (d3*8) + (d4*7) + (d5*6) + (d6*5) + (d7*4) + (d8*3) + (d9*2);
    
    resto1 = soma1 % 11;

    if (resto1 < 2) {
        dv1 = 0;
    } else {
        dv1 = 11 - resto1;
    }
    printf("O primeiro digito verificador é: %d\n", dv1);
    
    soma2 = (d2*10) + (d3*9) + (d4*8) + (d5*7) + (d6*6) + (d7*5) + (d8*4) + (d9*3) + (dv1*2);
    
    resto2 = soma2 % 11;
    if (resto2 < 2) {
        dv2 = 0;
    } else {
        dv2 = 11 - resto2;
    }
    printf("O segundo Digito verificador é %d\n",dv2);

    return 0;

}