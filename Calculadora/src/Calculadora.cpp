#include <iostream>
#include "Calculadora.h"

Calculadora::Calculadora()
{
}

float Calculadora::somar(float a, float b){
    return a+b;
}

float Calculadora::subtrair(float a, float b){
    return a-b;
}

float Calculadora::multiplicar(float a, float b){
    return a*b;
}

float Calculadora::dividir(float a, float b){
    if(b==0){
        std::cout<<"Erro, a base nao pode ser zero!"<<std::endl;
    }
    else
        return a/b;
}

float Calculadora::potencia(float a, float b){
    return pow(a,b);
}

float Calculadora::raiz(float a, float b){
    if(b==0){
        std::cout<<"Erro, nao existe raiz de indice zero!"<<std::endl;
    }
    else
        return pow(a, 1.0/b);
}

float Calculadora::logaritmo(float a, float b){
    if(b==0){
        std::cout<<"Erro, log nao esta definido para valores < 1"<<std::endl;
    }
    else
        return log(a)/log(b);
}

Calculadora::~Calculadora()
{
}
