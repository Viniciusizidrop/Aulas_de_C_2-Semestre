/*Exercício 5: Validador de Elegibilidade de Passagens Aéreas e Conexões (Visto/Vacina)
--------------------------------------------------------------------------------
Contexto: Sistemas de check-in internacional validam regras rígidas de trânsito 
aeroportuário combinando o destino, escalas e documentos.

Enunciado: Escreva um programa que simule o pré-embarque de um passageiro. 
O programa deve ler o código do Continente de Destino usando um menu switch-case:
1 - América do Norte | 2 - Europa | 3 - Ásia

Depois, o programa deve fazer três perguntas booleanas (use 1 para Sim e 0 para Não):
- Possui passaporte válido? (int)
- Possui visto aprovado para o destino? (int)
- Comprovante de vacinação internacional em dia? (int)

Regras de Elegibilidade Combinadas:
- Para qualquer destino, se não possuir passaporte válido, o embarque é "NEGADO" 
  imediatamente.
- Caso 1 (América do Norte): Exige Passaporte VÁLIDO E Visto APROVADO E Vacinação EM DIA.
- Caso 2 (Europa): Exige Passaporte VÁLIDO e Vacinação EM DIA. O visto NÃO é 
  obrigatório (isento para turismo).
- Caso 3 (Ásia): Exige Passaporte VÁLIDO E (Visto APROVADO OU Vacinação EM DIA - 
  caso o país de parada aceite teste alternativo).

Saída do Programa:
Exiba o status final: "Embarque Autorizado" ou "Embarque Negado", detalhando qual 
documento ou requisito impediu a viagem.*/
#include <stdio.h>
int main(){
    int passaporte,visto,vacina,embarque=0;
    int caso;
    printf("Escolha o seu destino (1-América do Norte | 2-Europa | 3-Ásia): ");
    scanf("%d",&caso);
    printf("Digite 1 se possuir um passaporte valido e 0 se não: ");
    scanf("%d",&passaporte);
    printf("Digite 1 se seu visto esta em dia e 0 se não: ");
    scanf("%d",&visto);
    printf("Digite 1 se a sua vacinação esta em dia e 0 se não: ");
    scanf("%d",&vacina);

    switch (caso)
    {
    case 1:
    if(passaporte==1 && visto==1 && vacina==1){
      embarque=1;
    }
    if(passaporte==0){
      printf("Passaporte Invalido!\n");
    }
    if(visto==0){
      printf("Visto Negado!\n");
    }
    if(vacina==0){
      printf("Vacinação não esta em dia!\n");
    }
      break;
    case 2:
    if(passaporte==1 && vacina==1){
      embarque=1;
    }
    if(passaporte==0){
      printf("Passaporte Invalido!\n");
    }
    if(vacina==0){
      printf("Vacinação não esta em dia!\n");
    }

    break;
    case 3:
    if(passaporte==1 && (visto==1 || vacina==1)){
      embarque=1;
    }
    if(passaporte==0){
      printf("Passaporte Invalido!\n");
    }
    if(visto==0 && vacina==0){
      printf("Visto Negado ou vanicação não esta em dia!\n");
    }

    break;

    default:
    printf("Error, tente novamente\n");
      break;
    }

    if (embarque==1){
      printf("Embarque Autorizado\n");
    }
    else{
      printf("Embarque Negado\n");
    }

}