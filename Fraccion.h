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
    virtual Fraccion multiplicacion(Fraccion);
    void imprimir();
    int getNumerador();
    int getDenominador();
    void setNumerador(int);
    void setDenominador(int);
    Fraccion multiplicacion(int);
    float decimal();

};
