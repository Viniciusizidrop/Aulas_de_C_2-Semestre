#include <stdio.h>
//Questão1
int buscaLinear(int v[], int n, int chave){
    
    for(int i = 0; i<n;i++){
        if( v[i] == chave)
            return 1;
        }
        return -1;
    }

int main() {
    int chaves;
     int v[] = {1, 2, 3, 4, 5};
     printf("Digite a sua matricula: ");
     scanf("%d", &chaves);
     printf("%d\n",buscaLinear(v,5,chaves));

    if (buscaLinear(v,5,chaves) == 1) {
        printf("Matriculado\n");
    }
    else{
        printf("Não matriculado\n");
    }
}