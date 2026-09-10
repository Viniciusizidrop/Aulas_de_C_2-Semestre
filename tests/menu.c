//aba de testes tentativa de menu
#include <stdio.h>

//aula1
void media(void){
    int nota1;
    int nota2;
    int media;
    nota1 = 6;
    nota2 = 9;
    media = (nota1 + nota2) / 2;
    printf("Media = %d\n" , media);
}

//aula2
void media2(void){
    float nota1;
    float nota2;
    float media;

    printf("Digite a nota1: ");
    scanf("%f", &nota1);

    printf("Digite a nota2: ");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2) / 2;

    printf("A media e %.2f. A nota1: %.2f. nota2: %.2f\n", media, nota1, nota2);
}
void ConversorTemperatura(void){
    float celsius;
    float fahrenheit;

    printf("Digite a temperatura em celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f graus celsius equivalem a %.2f graus fahrenheit\n", celsius, fahrenheit);
}

//aula3
void cpf(void){
    int d1,d2,d3,d4,d5,d6,d7,d8,d9;
    int soma1,soma2;
    int resto1,resto2;
    int dv1,dv2;

    printf("Digite o primeiro digito do CPF: ");
    scanf("%d", &d1);
    printf("Digite o segundo digito do CPF: ");
    scanf("%d", &d2);
    printf("Digite o terceiro digito do CPF: ");
    scanf("%d", &d3);
    printf("Digite o quarto digito do CPF: ");
    scanf("%d", &d4);
    printf("Digite o quinto digito do CPF: ");
    scanf("%d", &d5);
    printf("Digite o sexto digito do CPF: ");
    scanf("%d", &d6);
    printf("Digite o setimo digito do CPF: ");
    scanf("%d", &d7);
    printf("Digite o oitavo digito do CPF: ");
    scanf("%d", &d8);
    printf("Digite o nono digito do CPF: ");
    scanf("%d", &d9);

    soma1 = (d1*10) + (d2*9) + (d3*8) + (d4*7) + (d5*6) + (d6*5) + (d7*4) + (d8*3) + (d9*2);
    
    resto1 = soma1 % 11;

    if (resto1 < 2) {
        dv1 = 0;
    } else {
        dv1 = 11 - resto1;
    }
    printf("O primeiro digito verificador é: %d\n", dv1);
    
    soma2 = (d2*10) + (d3*9) + (d4*8) + (d5*7) + (d6*6) + (d7*5) + (d8*4) + (d9*3) + (dv1*2);
    
    resto2 = soma2 % 11;
    if (resto2 < 2) {
        dv2 = 0;
    } else {
        dv2 = 11 - resto2;
    }
    printf("O segundo Digito verificador é %d\n",dv2);
}
//aula4
void triangulo(void){
    int lado1;
    int lado2;
    int lado3;

    printf("digite o lado 1 do triangulo ");
    scanf("%d", &lado1);
    printf("digite o lado 2 do triangulo ");
    scanf("%d", &lado2);
    printf("digite o lado 3 do triangulo ");
    scanf("%d", &lado3);

    if((lado1 == lado2) && (lado1 == lado3) && (lado2 == lado3)){
        printf("o seu triangulo e equilatero\n");
    }
    else if((lado1 + lado2 < lado3) || (lado2 + lado3 < lado1) || (lado1 + lado3 < lado2)){
        printf("error \n");
    }
    else if((lado1 != lado2) && (lado1 != lado3) && (lado2 != lado3)){
        printf("seu triangulo e um escaleno\n");
    }
    else if((lado1 == lado2 != lado3) || (lado1 != lado2 == lado3)){
        printf("o seu triangulo e isosceles\n");
    }
}
void saque(void){
    int numero;
    int resto50;
    int resto20;
    int resto10;
    int resto5;
    int restou;
    int sobra50;
    int sobra20;
    int sobra10;
    int sobra5;

    printf("Digite o valor a ser sacado: ");
    scanf("%d", &numero);

    resto50 = numero / 50;
    sobra50 = numero % 50;
    
    resto20 = sobra50 / 20;
    sobra20 = sobra50 % 20;

    resto10 = sobra20 / 10;
    sobra10 = sobra20 % 10;

    resto5 = sobra10 / 5;
    sobra5 = sobra10 % 5;

    restou = sobra5 / 1;

     
    //printf("%d, %d, %d, %d,",sobra50,sobra20,sobra10,sobra5);
    printf("notas de 50: %d, notas de 20: %d, notas de 10: %d, notas de 5: %d \n",resto50,resto20,resto10,resto5);
    if ((restou < 5) && (restou > 0)){
        printf("um total de R$ %d não pode ser sacado\n", restou);
    }
}
void imposto(void){
    float salario;
    float calculo;
    float bruto;
    printf("digite o seu salario: ");
    scanf("%f", &salario);

    if (salario <= 2000){
        printf("sem imposto %.2f",salario);
    }
    else if (2000 < salario && salario < 4000 ){
        calculo = salario * 0.15;
        bruto = salario - calculo;
        printf("15 de imposto %.2f e seu salario bruto e de %.2f", calculo, bruto);
    }

    else if (salario > 4000){
        calculo = salario * 0.225 + 300;
        bruto = salario -  calculo;
        printf("22.5 de imposto variavel + imposto fixo de 300: %.2f e seu salario bruto e de %.2f", calculo, bruto);
}
}
void AnoBissexto(void){
    int ano;
    int calculo;
     
    printf("digite o ano: ");
    scanf("%d", &ano);

    if (ano % 400 == 0){
        printf("ano bissexto\n");}
    else if(ano % 100 == 0) {
        printf("não e bissexto\n");}
    else if(ano % 4 == 0) {
        printf("esse ano e bissexto\n");}
    else{
        printf("Error\n");}
}
void segundos(void){
        int total_s;
    int semanas;
    int resto_semanas;
    int dias;
    int resto_dias;
    int horas;
    int resto_horas;
    int minutos;
    int resto_minutos;
    int segundos;

    printf("digite um quantidade de segundos para o calculo: ");
    scanf("%d", &total_s);

    semanas = total_s / 604800;
    resto_semanas = total_s % 604800;

    dias = resto_semanas / 86400;
    resto_dias = resto_semanas % 86400;

    horas = resto_dias / 3600;
    resto_horas = resto_dias % 3600;

    minutos = resto_horas / 60;
    resto_minutos = resto_horas % 60;

    segundos = resto_minutos;

    printf("semanas: %d, dias: %d, horas: %d, minutos: %d, segundos: %d \n", semanas,dias,horas,minutos,segundos);
}



void menu(void){
    printf("Menu:\n");
    printf("0. para abrir o menu novamente.\n");
    printf("1. Calcular média\n");
    printf("2. Média digitada 2\n");
    printf("3. Conversor de Celsisus p/fahrenheit\n");
    printf("4. Validador de Cpf\n");
    printf("5. Calculo do triangulo \n");
    printf("6. Saque no caixa \n");
    printf("7. Calculo simples de imposto \n");
    printf("8. Calculo do ano bissexto \n");
    printf("9. Conversor de segundos ate semanas \n");
    printf("-1. Sair\n");
}
int main(void) {
    menu();
while(1) {
    printf("Escolha uma opção: ");
    
    int opcao;
    scanf("%d", &opcao);
    
    if (opcao == -1) {
        printf("Saindo do Menu...\n");
        break;
    }
switch (opcao) {
    case 0: menu(); break;
    case 1: media(); break;
    case 2: media2(); break;
    case 3: ConversorTemperatura(); break;
    case 4: cpf(); break;
    case 5: triangulo(); break;
    case 6: saque(); break;
    case 7: imposto(); break;
    case 8: AnoBissexto(); break;
    case 9: segundos(); break;
    default: printf("Opção inválida!\n"); break;
}
}
}