/* 2. Faça o programa que apresenta a seguinte saída, perguntando ao usuário o
número máximo (no exemplo, 9). Este número deve ser sempre ímpar.
1 2 3 4 5 6 7 8 9
 2 3 4 5 6 7 8
  3 4 5 6 7
   4 5 6
     5*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


bool ehpar(int i) { return i % 2 == 0; }

int main(){
  #ifdef _WIN32
  system("cls");
#else
  system("clear");
#endif
    int numero_maximo;
  printf("Digite um número impar: ");
  scanf("%d", &numero_maximo);

  if (ehpar(numero_maximo)) {
    printf("Não é impar!\n");
  } else {
    for (int linha = ((numero_maximo + 1) / 2); linha >1 / 2; linha--) { 
      for (int numero_iterador = 1; numero_iterador <= numero_maximo; numero_iterador++) { 
        if (numero_iterador == numero_maximo && linha == 1) {
          printf("%d \n", numero_iterador);
        } else if (numero_iterador == numero_maximo) {
          printf("- \n");
        } else if (numero_iterador < linha || numero_iterador > (numero_maximo - linha) + 1) {
          printf("- ");
        } else {
          printf("%d ", numero_iterador);
        }
      }
    }
  }
  
  return 0;
}