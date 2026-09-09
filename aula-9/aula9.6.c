/*Exercício 4: Tarifador de Estacionamento Rotativo Inteligente (Uso de Switch-Case)
--------------------------------------------------------------------------------
Contexto: Um estacionamento de shopping possui tarifas que variam de acordo com o 
tipo de veículo e o período do dia (Horário de Pico vs. Horário Normal).

Enunciado: Escreva um programa em C que receba o Tipo de Veículo (um caractere) e 
a Quantidade de Horas que o veículo permaneceu estacionado (int). Em seguida, peça 
para o usuário informar o Período de Entrada usando um menu numérico com switch-case: 
1 - Manhã (06h às 12h), 2 - Tarde (12h às 18h - PICO), 3 - Noite (18h às 00h).

Tipos de Veículo:
- 'M' ou 'm': Motocicleta
- 'C' ou 'c': Carro Passeio
- 'V' ou 'v': Van / Utilitário

Regras de Tarifação Base (por hora):
- Motocicleta: R$ 5,00
- Carro Passeio: R$ 10,00
- Van: R$ 15,00

Modificadores Compostos:
- Se o veículo for Carro ou Van E o período for Tarde (Horário de Pico), acrescente 
  uma taxa fixa extra de R$ 8,00 ao valor total.
- Se o veículo for Motocicleta E o período for Noite, aplique um desconto de 20% 
  no valor total da tarifa.
- Se o tempo de permanência for superior a 5 horas, independentemente do veículo, 
  conceda 10% de desconto sobre o valor bruto das horas antes das taxas.

Saída do Programa:
Exiba o detalhamento do cálculo e o valor total final a ser pago pelo motorista.*/
#include <stdio.h>
int main(){
    char tipo;
    int horas;
    int periodo;
    int tarifa;

    printf("Digite o tipo do seu veiculo(M-moto|C-carro|V-van/utilitario): ");
    scanf("%c",&tipo);
    printf("Digite por quantas horas seu veiculo ficou estacionado: ");
    scanf("%d",&horas);
    printf("Digite o horario de quando você estacionou o veiculo: ");
    scanf("%d",&periodo);

    switch (tipo){
    case ('M'):
    case('m'):
      tarifa = horas * 5;
      if (horas>5){
        tarifa = tarifa - (tarifa * 0.10);
      }
      if (periodo>=18 && periodo<=24){
          tarifa = tarifa - (tarifa * 0.20);
  }
  printf("a tarifa da sua moto ficou em R$%d\n",tarifa);

      break;
    case ('C'):
    case('c'):
    tarifa = horas * 10;
    if (horas>5){
    tarifa = tarifa - (tarifa * 0.10);
      }
    if (periodo>=12 && periodo<=18){
    tarifa +=8;}
  printf("a tarifa do seu carro ficou em R$%d\n",tarifa);    
    break;

    case('V'):
    case('v'):
    tarifa = horas * 15;
    if (horas>5){
    tarifa = tarifa - (tarifa * 0.10);
      }
    if (periodo>=12 && periodo<=18){
    tarifa +=8;}
    printf("a tarifa da sua van ficou em R$%d\n",tarifa);
    break;

    default:
    printf("Error");
      break;
    }
  }