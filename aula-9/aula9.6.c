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
    
}