#include <stdio.h>
int calc_dv(int soma){
       int resto = soma % 11;
       int dv;
    if (resto < 2) {dv = 0;} 
    else {dv = 11 - resto;}
    return dv;
}
int main(){
int n,soma1=0,soma2=0,j=10,dv1=0,dv2=0;
for(int i=1; i<=9;i++){
    printf("Digite o num %d do CPF: ",i);
    scanf("%d",&n);
    soma1 += (n*j);
    if(i>=2){
        if(i!=9){
            soma2+=(n*(j+1));}
        else{
            dv1=calc_dv(soma1);
            soma2 += (dv1*(j+1));
            dv2=calc_dv(soma2);}
    }
    j--;   
}
printf("O dv1: %d\n",dv1);
printf("O dv2: %d\n",dv2);
}
//error