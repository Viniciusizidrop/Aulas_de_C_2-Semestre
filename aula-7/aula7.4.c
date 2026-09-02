//Contagem Regressiva
//O usuario deve decrementa-lo ate 1
#include <stdio.h>
int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Contagem Regressiva\n");
    while(n>=1){
    printf("%d\n",n);
    n--;} // n -=1 | n--
    printf("Boom\n");
}
