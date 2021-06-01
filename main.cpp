#include "Vect.h"
#include <iostream>
using namespace std;

int main(){
    cout << "Evaluando la clase Vector:" << endl << "============================" << endl;

    Fraccion f1 (3,7); 
    Fraccion f2 (9,12); 
    Fraccion f3 (1,2); 
    Fraccion f4 (3,2); 
    Fraccion f5 (4,5); 
    Fraccion f6 (9,2); 

    Fraccion farray1[4] = {f3,f2,f1, f4};
    Fraccion farray2[4] = {f6,f5,f4, f3}; 
    Fraccion farray3[3] = {f1,f2,f3};
    Fraccion farray4[3] = {f4,f5,f6}; 
    
    Vect v1 = Vect(4, farray1);
    Vect v2 = Vect(4, farray2);
    Vect v3 = Vect(3, farray3);
    Vect v4 = Vect(3, farray4);
      
    
    cout << " Operaciones para Vector de 4 dimensiones:" << endl;
    cout << "Vector 1:" << endl;
    v1.print();
    cout << "Vector 2:" << endl;
    v2.print();
    cout << "" << endl;

    cout << "Suma:" << endl;
    Vect v5 = v1+v2; 
    v5.print();

    cout << "" << endl;

    cout << "Resta:" << endl;
    Vect v6 = v1-v2;
    v6.print();
    cout << "" << endl;

    cout << "Producto punto:" << endl;
    Fraccion f_res = v1*v2;    
    f_res.imprimir();
    cout << f_res.decimal() << endl;
    cout << "" << endl;

    cout << "Producto cruz v1 x v2:" << endl;
    v1.producto(v2);

    cout << "" << endl;


    cout << "Angulo entre vectores: " << v1.angulo(v2) <<endl;

    cout << "" << endl;

    cout << "Magnitud del vector 1: " << v1.magnitud() << endl;
    cout << "" << endl;

    cout << "Magnitud del vector 2: " << v2.magnitud() << endl;

    cout << "" << endl;
    
    cout << "Escalamiento del vector 1 con 5.8:" << endl;
    Vect v7 = v1.producto(5.8);
    v7.print();

    cout << "" << endl;

    
    cout << "Operaciones para Vector de 3 dimensiones:" << endl;
    cout << "Vector 3:" << endl;
    v3.print();
    cout << "Vector 4:" << endl;
    v4.print();
    cout << "" << endl;

    cout << "Suma:" << endl;
    Vect v8 = v3+v4; 
    v8.print();
    cout << "" << endl;

    cout << "Resta:" << endl;
    Vect v9 = v3-v4; 
    v9.print();
    cout << "" << endl;

    cout << "Producto punto:" << endl;
    Fraccion f_res2 = v3*v4;   
    f_res2.imprimir();
    cout << f_res2.decimal() << endl;
    
    cout << "" << endl;

    cout << "Producto cruz v3 x v4:" << endl;
    Vect v10 = v3.producto(v4);
    v10.print();

    cout << "" << endl;

    cout << "Angulo entre vectores: " << v3.angulo(v4) << endl;

    cout << "" << endl;

    cout << "Magnitud del vector 3: " << v3.magnitud() << endl;
    cout << "" << endl;

    cout << "Magnitud del vector 4: " << v4.magnitud() << endl;
    cout << "" << endl;

    cout << "Escalamiento del vector 3 con 9:" << endl;
    Vect v11 = v3.producto(9);
    v11.print();
    cout << "" << endl;

    cout << "Operaciones para vectores de diferentes dimensiones (v1 y v3):" << endl;
    cout << "Suma:" << endl;
    Vect v12 = v1+v3; 
    v12.print();
    cout << "" << endl;

    cout << "Resta:" << endl;
    Vect v13 = v1-v3; 
    v13.print();
    cout << "" << endl;

    cout << "Producto punto:" << endl;
    Fraccion f_res3 = v1*v3;   
    f_res3.imprimir();
    cout << f_res3.decimal() << endl;
    cout << "" << endl;

    cout << "Producto cruz v1 x v3:" << endl;
    Vect v14 = v1.producto(v3);
    v14.print();
    cout << "" << endl;

    cout << "Angulo entre vectores: " << v1.angulo(v3) << endl;

    return 0;
    
  
};
