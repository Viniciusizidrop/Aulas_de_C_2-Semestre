#include <stdio.h>

int main(){
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

    return 0;

}