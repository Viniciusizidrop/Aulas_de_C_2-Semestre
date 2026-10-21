#include <stdio.h>

int main(){
    int x = 10;
    int *p = &x;
    printf("Valor de x: %p\n", x);
    printf("Endereco de x: %p\n", (void*)&x);
    printf("Valor de p: %p\n", (void*)p);
    printf("Valor apontado por p: %d\n", *p);
    *p = 20;
    printf("Novo valor de x: %d\n", x);
    return 0;
}