#include <stdio.h>
int main() {
    int x = 23;
    int *p = &x;
    printf("%d\n",*p);
    *p = 100;
    printf("%d\n", x);
}
//& endereço de onde a variavel esta
//* disreferenciação acessa e modifica o valor que esta sendo apontado