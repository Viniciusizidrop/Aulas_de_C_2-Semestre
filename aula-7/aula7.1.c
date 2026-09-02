//while (condicao {corpo do loop})
//Ler notas até o usuário digite um valor negativo.
#include <stdio.h>

int main(){
    float nota = 0;
    float soma=0;

    while(nota>=0){
        printf("Digite um valor para a nota: ");
        scanf("%f", &nota);
        printf("nota %.2f\n",nota);
        soma +=nota;
        printf("a soma total ate agr é: %.2f\n", soma);
    }
    printf("Digitou negativo corta o loop\n");
    return 0;
}