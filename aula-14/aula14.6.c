#include <stdio.h>
#include <stdlib.h>

void preenche(int *v, int n) {
    for (int i = 0; i < n; i++) v[i] = i * 2;
}

int main() {
    int *v =malloc(5*sizeof(int));//OU int v[5];
    preenche(v, 5);
    printf("%d\n", v[4]);
    free(v);
    v = NULL;
    return 0;
}
