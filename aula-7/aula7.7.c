//escreva um programa que:
//leia 10 notas (0 a 10)
//calcule e imprima a média, a maior e a menor nota.
#include <stdio.h>
int main(){
    float nota;
    float media,menor,maior,soma=0;
    for(int i=1; i<=10;i++){
        printf("Digite uma nota: ");
        scanf("%f",&nota);
        if(nota<=10 && nota >=0) {
            soma += nota;
            if (i==1){
                maior = nota;
                menor = nota;
            }
            else{
                if(nota>maior){maior=nota;}
                if(nota<menor){menor=nota;}
            }
    
    }
else{
    printf("Nota invalida\n");
    return 0;
}
    }
    media = soma / 10;
    printf("A menor nota é: %.2f, A maior é %.2f, é a Media é %.2f\n ",menor,maior,media);

}