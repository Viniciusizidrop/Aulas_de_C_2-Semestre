//4. Controle de Estoque de Loja
// Desenvolva um programa que exiba um menu repetitivo com as seguintes opções: 1 - Adicionar
// Item, 2 - Remover Item, 3 - Exibir Saldo Atual e 4 - Sair. O programa deve começar com um
// estoque de 100 itens. Cada vez que o usuário escolher 1 ou 2, o programa deve pedir a
// quantidade e atualizar o estoque. O menu deve continuar aparecendo até que a opção 4 seja
// selecionada.
#include <stdio.h>
int main(){
    int escolha,item=100,quantidade;
    printf("=========MENU=========\n");
    printf("1 - Adicionar Item\n");
    printf("2 - Remover Item\n");
    printf("3 - Exibir Saldo Atual\n");
    printf("4 - Sair\n");
    printf("=======================\n");

    while(escolha!=4){
        printf("Digite a sua escolha: ");
        scanf("%d",&escolha);
        if(escolha==1){
            printf("Digite quantos itens que irá adicionar: ");
            scanf("%d", &quantidade);
            item += quantidade;
        }
        if(escolha==2){
            printf("Digite a quantidade de itens que irá remover: ");
            scanf("%d", &quantidade);
            item -= quantidade;
        }
        if(escolha==3){
            printf("Há %d itens no sistema\n",item);
        }
        if(escolha==4){
            printf("Saindo do sistema...\n");
        }
    }
}