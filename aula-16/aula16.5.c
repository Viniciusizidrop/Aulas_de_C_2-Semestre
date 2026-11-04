#include <stdio.h>

//Questão 6
int contaConsoantes(const char *s) {
    int c = 0;

    while (*s) {
        char ch = *s;

        if ((ch >= 'a' && ch <= 'z') ||
            (ch >= 'A' && ch <= 'Z')) {

            if (ch != 'a' && ch != 'e' && ch != 'i' &&
                ch != 'o' && ch != 'u' &&
                ch != 'A' && ch != 'E' && ch != 'I' &&
                ch != 'O' && ch != 'U') {

                c++;
            }
        }

        s++;
    }

    return c;
}

int main() {
    char palavra[] = "Programacao";

    printf("Quantidade de consoantes: %d\n",
           contaConsoantes(palavra));

    return 0;
}