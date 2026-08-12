#include <stdio.h>
int main() {
    int nota1;
    int nota2;
    int media;
    nota1 = 6;
    nota2 = 9;
    media = (nota1 + nota2) / 2;
    printf("Media = %d" , media);
    return 0;  
}
//gcc --version
//se não tiver https://sourceforge.net/projects/mingw/
//para compilar: gcc aula1.c -o aula1
//para rodar ./aula1