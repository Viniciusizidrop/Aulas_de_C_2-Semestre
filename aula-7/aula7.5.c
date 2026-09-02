//Mostre para o usuario um menu com 3 opções
//1==pritf voce escolheu a opção 1
//2==pritf voce escolheu a opção 2
//3== sair do programa
// qualquer outro o programa deve exibir uma mensagem de menu invalido
#include <stdio.h>
int main() {
    int opcao;

    while(opcao!=3) {
    printf("Escolha uma Opção de 1 a 3: ");
    scanf("%d", &opcao);
    if(opcao == 1){
        printf("Opção 1 foi escolhida\n");}
    else if(opcao == 2){
        printf("Opção 2 foi escolhida\n");}
    else if (opcao == 3) {
        printf("Programa encerrado\n");
        return 0;}
    else{
        printf("opção de escolha invalida escolha outra\n");}
    }}
