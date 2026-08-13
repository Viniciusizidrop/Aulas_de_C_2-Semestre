#include <stdio.h>

int main(){
    float celsius;
    float fahrenheit;

    printf("Digite a temperatura em celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f graus celsius equivalem a %.2f graus fahrenheit\n", celsius, fahrenheit);
    return 0;
}
