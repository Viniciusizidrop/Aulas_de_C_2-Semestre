//6. Sequência de Fibonacci Aplicada
// Crie um programa que peça ao usuário um número inteiro N. O programa deve gerar e imprimir
// os N primeiros termos da Sequência de Fibonacci (onde os dois primeiros termos são 0 e 1, e os
// próximos são sempre a soma dos dois anteriores: 0, 1, 1, 2, 3, 5, 8, 13...).
#include <stdio.h>
int main(){
    int n1=0,n2=1,n3;
    int termos;
    printf("Digite quantos termos tera a sequencia: ");
    scanf("%d",&termos);

for(int i=1;i<termos;i++){
    if(i==1){
        printf("%d %d ",n1,n2);
    }
    else{
        n3= n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }


}

}