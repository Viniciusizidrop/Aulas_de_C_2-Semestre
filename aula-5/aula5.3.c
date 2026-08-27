#include <stdio.h>
// Calcular o somatório de 1 a n (n informado pelo usuario)

int main() {
    int n;
    int soma = 0;

    printf("Digite um número: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        soma += i;
    }
    printf("A soma de 1 a %d é: %d\n",n,soma);
    
    return 0;
}