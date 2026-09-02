//imprimir a tabuada de 1 a 10(*),2for
#include <stdio.h>
int main(){
    /*printf("Digite um numero para ver a tabuada\n");
    scanf("%f",&n);*/
    printf("Tabuada do 1 ao 10\n");
    for(int n=1; n<=10; n++){
    for (int i = 1; i<=10; i++){
        int m = n * i;
        printf("%d X %d = %d\n",n,i,m);
    }
    printf("---------------\n");}
    return 0;
}