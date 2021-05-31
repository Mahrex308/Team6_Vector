#ifndef FRACCION_H
#define FRACCION_H
#include "Fraccion.h"
#endif

class Vect{
private: 
    Fraccion * componentes;
    int tamano;

public:
    Vect();
    Vect(int);
    Vect(int, Fraccion *);
    int getTamano();
    void setTamano(int);
    Fraccion getFraccion(int);
    void setFraccion(int, Fraccion);
    Vect operator + (Vect);
    Vect operator - (Vect);
    Fraccion operator * (Vect);
    virtual Vect producto(Vect);
    float angulo(Vect);
    float magnitud();
    Vect producto(int);
    void print();
    
};