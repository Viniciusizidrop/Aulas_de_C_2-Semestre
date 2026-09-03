//7. Analisador de Números Primos
// Desenvolva um programa que receba um número inteiro positivo do usuário. Utilizando uma
// estrutura de repetição, verifique se o número digitado é primo (divisível apenas por 1 e por ele
// mesmo) ou composto. Exiba uma mensagem direta na tela informando o resultado.
#include <stdio.h>
int main(){
    int n;
    int d=2;
        printf("Digite um número: ");
        scanf("%d", &n);
    if (n <= 0) {
        printf("Um número primo não pode ser negativo.\n");
        return 0;}
        
        if(n == 1){
        d = 1;
    }

        for(int i = 2;i<n ;i++){
            if(n%i==0){
                d=1;
            }

        }
        if(d==2){
            printf("primo");
        }
        if(d==1){
            printf("num e primo");
        }
    }
