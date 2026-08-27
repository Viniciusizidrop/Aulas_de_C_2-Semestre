//3. Crie um código para verificar se dado um número pelo usuário, verifique se ele é primo.

#include <stdio.h>

int main(){
    int n;
    int primo = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n==1) return 0;
    if(n==2) return 1;

    for(int i = 2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;

    

}