#include <stdio.h>
#include <stdlib.h>
//Questão 7
int main(void) {
    int n;

    printf("Quantos valores? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Entrada invalida.\n");
        return 1;
    }

    int *v = malloc(n * sizeof(int));
    if (v == NULL) {
        printf("Erro: falha na alocacao de memoria.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    double soma = 0;
    for (int i = 0; i < n; i++) {
        soma += v[i];
    }
    printf("Media: %.2f\n", soma / n);

    free(v);
    v = NULL;   // evita ponteiro pendente

    return 0;
}
