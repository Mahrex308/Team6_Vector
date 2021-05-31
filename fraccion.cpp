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

Fraccion::Fraccion suma(Fraccion)
{

}

Fraccion::Fraccion multiplicacion(Fraccion)
{

}

void Fraccion::imprimir()
{

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
