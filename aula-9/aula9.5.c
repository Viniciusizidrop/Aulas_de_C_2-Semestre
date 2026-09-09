/*Exercício 3: Sistema de Triagem Hospitalar Avançado (Protocolo de Manchester)
--------------------------------------------------------------------------------
Contexto: Prontos-socorros utilizam sistemas de triagem para definir a urgência do 
atendimento com base em sintomas combinados.

Enunciado: Desenvolva um programa que auxilie na triagem médica. O programa deve 
solicitar ao usuário que informe a gravidade de 3 sintomas clássicos usando uma 
escala de 0 (Ausente) a 3 (Grave):
- Dor Torácica (int)
- Dificuldade Respiratória (int)
- Febre/Temperatura (int)

Regras de Classificação:
- Se a Dor Torácica FOR igual a 3 OU a Dificuldade Respiratória FOR igual a 3: 
  Classificação "VERMELHA" (Emergência - Atendimento Imediato).
- Se a Dor Torácica for 2 OU a Dificuldade Respiratória for 2, E a Febre for maior 
  ou igual a 2: Classificação "LARANJA" (Muito Urgente - Até 10 minutos).
- Se pelo menos um dos três sintomas for igual a 2 ou 3 (e não se enquadrar nas 
  regras anteriores): Classificação "AMARELA" (Urgente - Até 60 minutos).
- Se todos os sintomas forem menores ou iguais a 1, mas pelo menos um for igual a 1: 
  Classificação "VERDE" (Pouco Urgente).
- Se todos os sintomas forem 0: Classificação "AZUL" (Não Urgente).

Saída do Programa:
Exiba a cor da classificação do paciente e o tempo máximo de espera recomendado.*/
#include <stdio.h>
int main(){
    
}