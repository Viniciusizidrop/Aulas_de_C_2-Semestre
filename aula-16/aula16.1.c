#include <stdio.h>

//Questão 2
int main(void) {
    int x = 42;
    int *p = &x;

    printf("A: %d\n", x);
    printf("B: %d\n", *p);
    printf("C: %p\n", (void*)&x);
    printf("D: %p\n", (void*)p);

    *p = 100;

    printf("E: %d\n", x);

    return 0;
}
