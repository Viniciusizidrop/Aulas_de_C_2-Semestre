#include <stdio.h>
//Questão 4
void troca(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void trocaErrada(int a, int b) {
    int t = a;
    a = b;
    b = t;
}

 int main() {
        int x = 15;
        int y = 20;
        trocaErrada(x,y);
        printf("errorX=%d |",x);
        printf(" errorY=%d\n",y);

        troca(&x,&y);
        printf("X=%d |",x);
        printf(" Y=%d\n",y);


    }