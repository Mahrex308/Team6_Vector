//#pragma once
class Fraccion{

private:
    int numerador;
    int denominador;

public:
    Fraccion();
    Fraccion(int, int);
    void reduccion(int &,int &);
    Fraccion suma(Fraccion);
    Fraccion resta(Fraccion);
    Fraccion multiplicacion(Fraccion);
    void imprimir();
    int getNumerador();
    int getDenominador();
    void setNumerador(int);
    void setDenominador(int);
    float decimal();

};
