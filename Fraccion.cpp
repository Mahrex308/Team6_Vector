#include "Fraccion.h"
#include <iostream>
using namespace std;

Fraccion::Fraccion()
{
    numerador = 0;
    denominador = 1;

}

Fraccion::Fraccion(int num, int denom)
{
   if(denom == 0)
        denom = 1;
    // ambos negativos o unicamente denominador negativo, entonces cambio signo en ambos
    // La expresion completa sería den < 0 && num < 0 || num > 0 && den < 0
    // Sin embargo, tienen en comun que si el denominador es negativo, cambio el signo en ambos 
    if(denom < 0 ){ 
        num = -num;
        denom = -denom;
    }
    reduccion(num,denom);
    numerador = num;
    denominador = denom;

}

void Fraccion::reduccion(int &num,int &den)
{
// Variables auxiliares
    int limit = 0;
    int signo1 = 1;
    int signo2 = 1;
    // Guarda el signo en las variables signoX y deja num y den sin signo.
    // Esto se hace para que las operaciones modulo y limite esten correctas logicamente
    if(num < 0){
        signo1 = -1;
        num = num*signo1;
    }
    if(den < 0){
        signo2 = -1;
        den = den*signo2;
    }
    // La variable limite es la menor entre el denominador y el numerador
    // Sirve como criterio de parada al identificar un posible maximo comun divisor.
    if(num >= den)
        limit = den; 
    else
        limit = num;
    int it = 2;
    while(it<=limit){
        if(num % it == 0 && den % it == 0){
            num = num/it;
            den = den/it;
        }else{
            it++;
        }
    }
    // Devolvemos los signos del numerador y denominador (en caso de que exista cambio)
    num = num*signo1;
    den = den*signo2;
   

}



Fraccion Fraccion::suma(Fraccion f2)
{
    int n_s, d_s;
    
    n_s = (numerador * f2.denominador) + (denominador * f2.numerador);

    d_s = denominador * f2.denominador;
    
   Fraccion fresultado(n_s,d_s);
    return fresultado;  
    

}

Fraccion Fraccion::resta(Fraccion farg){
    int num = numerador * farg.getDenominador() -  denominador * farg.getNumerador();
    int den = denominador * farg.getDenominador();
    Fraccion fresultado(num,den);
    return fresultado;
    
}


Fraccion Fraccion::multiplicacion(Fraccion f2)
{
    int n_prod, d_prod;

    n_prod = numerador * f2.numerador;

    d_prod = denominador * f2.denominador;
    Fraccion fresultado(n_prod,d_prod);
    return fresultado; 


}

Fraccion Fraccion::multiplicacion(int n){
    int num = numerador * n;
    Fraccion fresultado(num,denominador);
    return fresultado;  
}



void Fraccion::imprimir()
{
    cout<< numerador << "/" << denominador <<endl;
}

int Fraccion::getNumerador()
{
    return numerador;

}

int Fraccion::getDenominador()
{
    return denominador;

}

void Fraccion::setNumerador(int num)
{
    numerador = num;

}

void Fraccion::setDenominador(int denom)
{
    denominador = denom;

}

float Fraccion::decimal(){
    return (float)numerador/ (float)denominador; 
}
