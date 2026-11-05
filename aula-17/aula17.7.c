#define MAX 100
typedef struct { char itens[MAX]; int topo; } Pilha;

void init(Pilha *p) { p->topo = -1; }
int isEmpty(Pilha *p) { return p->topo == -1; }
int isFull(Pilha *p) { return p->topo == MAX - 1; }

void push(Pilha *p, char c) {
    if (!isFull(p)) p->itens[++p->topo] = c;
}
char pop(Pilha *p) {
    if (isEmpty(p)) return '\0';
    return p->itens[p->topo--];
}

int balanceado(const char *expr) {
    Pilha p; init(&p);
    for (int i = 0; expr[i]; i++) {
        char c = expr[i];
        if (c == '(' || c == '[' || c == '{') {
            push(&p, c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (isEmpty(&p)) return 0;
            char topo = pop(&p);
            if ((c == ')' && topo != '(') ||
                (c == ']' && topo != '[') ||
                (c == '}' && topo != '{')) return 0;
        }
    }