//implemente uma função void troca(int *a, int *b) que troque os valores de duas variaveis inteiras. escreva um main que leia dois numeros, chame a função e imprima o resultado. explique por que a passagem por ponteiro é necessária para que a troca tenha efeito fora da função
//R: sem os ponteiros o valor trocado nao ia sair do void
#include <stdio.h>
void troca(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
int main(){
   int a=10;
   int b=20;
   printf("%d %d\n",a,b);
   troca(&a,&b);
   printf("%d %d\n",a,b);

}