#include<stdio.h>


int div1(int d1,int d2,int d3,int d4,int d5,int d6,int d7, int d8,int d9){
    int soma1,resto1,dv1;
soma1 = (d1*10) + (d2*9) + (d3*8) + (d4*7) + (d5*6) + (d6*5) + (d7*4) +(d8*3) + (d9*2);

resto1 = soma1 % 11;

if (resto1 < 2) {
    dv1 = 0;
}
else {
    dv1 = 11 - resto1;
}

printf("O dv1 do CPF eh: %d\n", dv1);
return dv1;
}

int div2(int d2, int d3, int d4, int d5, int d6, int d7, int d8, int d9, int dv1){
    int soma2,resto2,dv2;
    
    soma2 = (d2*10) + (d3*9) + (d4*8) + (d5*7) + (d6*6) + (d7*5) + (d8*4) +(d9*3) + (dv1*2);

resto2 = soma2 % 11;

if (resto2 <2){
    dv2 = 0;
}
else {
    dv2 = 11 - resto2;
}
printf("O dv2 do CPF eh: %d\n", dv2);
return dv2;
}


int main(){
    int d1,d2,d3,d4,d5,d6,d7,d8,d9,dv1;
    //Pede o 9 digitos do CPF
    printf("Digite os primeiros 9 digitos do seu cpf: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d",&d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9);
    
    dv1 = div1(d1,d2,d3,d4,d5,d6,d7,d8,d9);
    div2(d2,d3,d4,d5,d6,d7,d8,d9,dv1);

return 0;
}