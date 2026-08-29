//3. Crie um código para verificar se dado um número pelo usuário, verifique se ele é primo.
#include <stdio.h>
int main() {
    int numero;
    int primo = 1;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if(numero == 1){
        primo = 0;
    }

    if (numero <= 0) {
        printf("Um número primo não pode ser negativo.\n");
        return 0;
    }

    for (int i = 2; i < numero; i++){
        if (numero % i == 0){
            primo = 0;
        }
    }
    if (primo == 1){
        printf("O numero %d é um número primo\n", numero);
    }
    else{
        printf("O numero %d não é um número primo\n", numero);
    }
    return 0;
}