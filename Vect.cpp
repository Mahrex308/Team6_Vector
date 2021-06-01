#include "Vect.h"
#include <iostream>
#include <math.h>
using namespace std;

//Constructor sin argumentos
Vect::Vect(){
    componentes = new Fraccion[1];
    tamano = 1;
}

//Constructor con tamaño especifico
Vect::Vect(int s){
    tamano = s;
    componentes = new Fraccion[s];
}


//Constructor con vector especifico
Vect::Vect(int s, Fraccion * arrf){
    componentes = arrf;
    tamano = s;
}

//Obtener tamaño del vector
int Vect::getTamano(){
    return tamano;
}

//Obtener Fraccion por indice
Fraccion Vect::getFraccion(int i){
    return componentes[i];
}

//Cambiar una fraccion por indice
void Vect::setFraccion(int i, Fraccion f){
    componentes[i] = f;
}

//Suma de vectores
Vect Vect::operator + (Vect vect){
	 if(tamano ==  vect.getTamano()){
        Vect newVect(tamano);
        for (int i=0; i<tamano; i++){
            newVect.setFraccion(i, componentes[i].suma(vect.getFraccion(i)));  
        }
        return newVect;
    }else{
        cout << "No se puede realizar la suma. Los vectores tienen que tener las mismas dimensiones" << endl;
        return Vect();
    }
}

//Resta de Vectores
Vect Vect::operator - (Vect vect){
    if(tamano ==  vect.getTamano()){
        Vect newVect(tamano);
        for (int i=0; i<tamano; i++){
            newVect.setFraccion(i, componentes[i].resta(vect.getFraccion(i)));  
        }
        return newVect;
    }else{
        cout << "No se puede realizar la resta. Los vectores tienen que tener las mismas dimensiones" << endl;
        return Vect();
    }
	 
}


//Producto punto
Fraccion Vect::operator *(Vect vec2){ 
    if(tamano == vec2.getTamano()){
        Fraccion res = Fraccion();
        for (int i=0; i<tamano; i++){
            Fraccion f1 = componentes[i].multiplicacion(vec2.getFraccion(i));
            res = res.suma(f1);
        }

        return  res;
    }else{
        cout << "No se puede realizar el producto punto. Los vectores tienen que tener las mismas dimensiones" << endl;
        return Fraccion();
    }
}

//Producto Cruz
Vect Vect::producto(Vect v2){
    if ((tamano ==3) || (v2.getTamano() == 3)){
        Fraccion x1 = componentes[0];
        Fraccion y1 = componentes[1];
        Fraccion z1 = componentes[2];

        Fraccion x2 = v2.getFraccion(0);
        Fraccion y2 = v2.getFraccion(1);
        Fraccion z2 = v2.getFraccion(2);

        Vect newVect(tamano);

        Fraccion i = (y1.multiplicacion(z2)).resta(z1.multiplicacion(y2));
        Fraccion j = (x1.multiplicacion(z2)).resta(z1.multiplicacion(x2));
        j.setNumerador((j.getNumerador())*-1);
        Fraccion k = (x1.multiplicacion(y2)).resta(y1.multiplicacion(x2));
        
        newVect.setFraccion(0, i);
        newVect.setFraccion(1, j);
        newVect.setFraccion(2, k);

        return newVect;

    }else{
        cout << "Solo valido para vectores de 3 dimensiones" << endl;
        return Vect();
    }
    
}

//Angulo entre 2 angulos
float Vect::angulo(Vect vect2){

    if (tamano == vect2.getTamano()){
        Vect v1  = Vect(tamano,componentes);
        float ang_rad = acos((v1*vect2).decimal()/ (v1.magnitud() * vect2.magnitud()));
        return ang_rad* (180/3.1416);
    }else{
        cout << "No se puede obtener el angulo. Los vectores tienen que tener las mismas dimensiones" << endl;
        return -1;
    }

}

//Magnitud de vector
float Vect::magnitud(){
    float mag = 0;
    for (int i=0; i<tamano; i++){
            float val = componentes[i].decimal();
            mag = mag + (val*val);
    }
    return sqrt(mag);
}

//Multiplicacion con escalar
Vect Vect::producto(int n){
    Vect newVect(tamano);
    for (int i=0; i<tamano; i++){
            newVect.setFraccion(i, componentes[i].multiplicacion(n));
    }
    return  newVect;

}


//Mostrar elementos del vector
void Vect::print(){

    cout << "[";
    int i;
    for (i=0; i<tamano; i++){
        cout << componentes[i].getNumerador() << "/" << componentes[i].getDenominador();
        if( i < tamano-1) cout << ", ";
    }
    cout << "]" << endl;    
} 
