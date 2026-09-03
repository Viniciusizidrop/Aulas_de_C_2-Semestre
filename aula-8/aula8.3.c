//3. Estatísticas de uma População
// Crie um algoritmo que leia a idade e o salário de 15 pessoas. Usando loops, calcule e exiba:
// A média de salário do grupo.
// A maior e a menor idade do grupo.
// A quantidade de pessoas com salário menor que R$ 2.000,00.
#include <stdio.h>
int main(){
    int idade;
    float salario,soma;
    int salme2=0;
    int maior,menor;
    float media;
    
    for(int i = 1;i<=15;i++){
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        printf("Digite seu salario: ");
        scanf("%f", &salario);
        soma += salario;
        if(i==1){
            menor = idade;
            maior = idade;
        }
        else{
            if(idade<menor){
                menor = idade;
            }
            if(idade>maior){
                maior = idade;
            }
        }
        if(salario<2000){
            salme2 += 1;
        }


    }
    media = soma / 15;
    printf("Media do salario do grupo: %.2f\n",media);
    printf("O maior idade e de %d e a menor e de %d\n",maior,menor);
    printf("quantidade de pessoas com salario menor de 2k é: %d\n",salme2);

}