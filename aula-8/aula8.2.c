//2. Validação de Acesso
// Crie um programa que defina uma senha numérica interna (ex: 2026). O programa deve pedir
// para o usuário digitar a senha. Se ele errar, exiba "Senha Inválida! Tente novamente" e peça o
// dado de novo. O programa só deve parar quando a senha correta for digitada ou quando o
// usuário atingir o limite de 3 tentativas erradas, exibindo a mensagem correspondente ("Acesso
// Permitido" ou "Conta Bloqueada").
#include <stdio.h>
int main(){
    int senha=2;
    int tentativa;
    for(int i =2; i>=0;i--){
        printf("Digite a senha: ");
        scanf("%d", &tentativa);
        if(tentativa==senha){
            printf("Acesso permitido\n");
            return 0;
        }
        if(tentativa!=senha){
            printf("Senha incorreta você tem mais %d tentativas\n",i);

        }

    }
    printf("Conta bloqueada");
    
}