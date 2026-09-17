#include <stdio.h>
//variaveis globais
float dolar = 5.45;
const float PI = 3.141592;
//convenção as constantes escreve em maiusculo
float areaQuadrado(float lado){
    float area = lado * lado;
    return area;
}

float areaRetangulo(float base, float altura){
    float area = base * altura;
    //ou
    return base * altura;
}

float areaLosango(float Dmaior, float Dmenor){
    float area = (Dmaior * Dmenor) / 2;
    return area;
}

float areaTriangulo(float base, float altura){
    float area = (base * altura) / 2;
    return area;
}

float areaCirculo(float raio){
    float area = PI * raio * raio;
    return area;
}

float areaTrapezio(float bMaior,float bMenor, float altura){
    float area = ((bMaior + bMenor) * altura) /2;
    return area;
}

//

float convertePdolar(float valorReal){
    float valorConvertido = valorReal / dolar;
    return valorConvertido;

}

void imprimePi(){
    printf("O valor de pi eh: %.6f\n",PI);
}

float retornaPi(){
    return PI;
}
