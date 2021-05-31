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

void Fraccion::reduccion(int &,int &)
{

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
