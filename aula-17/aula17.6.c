#include <stdlib.h>

typedef struct No {
    char titulo[50];
    struct No *prox;
} No;

No* inserirNoInicio(No *head, const char *titulo) {
    No *novo = (No*) malloc(sizeof(No));
    if (!novo) return head;
    strncpy(novo->titulo, titulo, 49);
    novo->titulo[49] = '\0';
    novo->prox = head;
    return novo;
}

No* removerPorTitulo(No *head, const char *titulo) {
    No *atual = head, *anterior = NULL;
    while (atual && strcmp(atual->titulo, titulo) != 0) {
        anterior = atual;
        atual = atual->prox;
    }
    if (!atual) return head;              // não encontrado
    if (!anterior) head = atual->prox;    // removendo a cabeça
    else anterior->prox = atual->prox;
    free(atual);
    return head;
}

void imprimir(No *head) {
    for (No *p = head; p; p = p->prox)
        printf("%s\n", p->titulo);
}