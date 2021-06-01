#include "fraccion.h"

Fraccion::Fraccion()
{
    numerador = 0;
    denominador = 1;

}

Fraccion::Fraccion(int num, int denom)
{
    numerador = num;
    denominador = denom;

}

void Fraccion::reduccion(int N&,int D&)
{
    numerador = N;

    denominador = D;

    if((numerador<0)&&(denominador<0))
    {
        numerador = numerador * (-1);

        denominador = denominador * (-1);

    }
    else
    {
        if((numerador>=0)&&(denominador<0))
        {
            numerador = numerador * (-1);

            denominador = denominador * (-1);
        }
    }
    
    

}

Fraccion::Fraccion suma(Fraccion f2)
{
    int n_s, d_s, num_r, denom_r;
    
    
    
    
    num_r = n_s;

    denom_r = d_s;
    

}

Fraccion Fraccion::resta(Fraccion farg){
    int num = numerador * farg.getDenominador() -  denominador * farg.getNumerador();
    int den = denominador * farg.getDenominador();
    Fraccion fresultado(num,den);
    return fresultado;
}


Fraccion::Fraccion multiplicacion(Fraccion f2)
{
    int n_prod, d_prod, num_r, denom_r;

    n_prod = f1.numerador * f2.numerador;

    d_prod = f1.denominador * f2.denominador;

    num_r = n_prod;

    denom_r = d_prod;

}

Fraccion Fraccion::multiplicacion(int n){
    int num = numerador * n;
    Fraccion fresultado(num,denominador);
    return fresultado;  
}



void Fraccion::imprimir()
{
    cout<< "Resultado: "<< num_r << "/" << denom_r<<endl;
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
