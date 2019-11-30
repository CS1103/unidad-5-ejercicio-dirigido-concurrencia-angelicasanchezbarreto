#include <iostream>
#include "matriz_conhilos.h"
#include "funciones.h"
using namespace std;

int main() {

    //ejemplo1 INT

    Matriz<int> matrizz1;
    Matriz<int> matrizz2;
    Matriz<int> result1;

    leer("ejemplo1.txt", matrizz1, matrizz2);
    cout<<endl;

    cout << "Filas A: " << matrizz1.filas << endl;
    cout << "Columnas A: " << matrizz1.columnas << endl;
    cout << "Matriz A: " << endl;
    matrizz1.imprimirMatriz();
    cout << endl;

    cout << "Filas B: " << matrizz2.filas << endl;
    cout << "Columnas B: " << matrizz2.columnas << endl;
    cout << "Matriz B: " << endl;
    matrizz2.imprimirMatriz();
    cout << endl;

    cout << "Multiplicación AxB: " << endl;
    result1 = matrizz1*matrizz2;
    result1.imprimirMatriz();
    cout << endl;


    //ejemplo FLOAT

    /*
    Matriz<float> matrizz7;
    Matriz<float> matrizz8;
    Matriz<float> result4;

    leer("ejemplo4.txt", matrizz7, matrizz8);
    cout<<endl;

    cout << "Filas G: " << matrizz7.filas << endl;
    cout << "Columnas G: " << matrizz7.columnas << endl;
    cout << "Matriz G: " << endl;
    matrizz7.imprimirMatriz();
    cout << endl;

    cout << "Filas H: " << matrizz8.filas << endl;
    cout << "Columnas H: " << matrizz8.columnas << endl;
    cout << "Matriz H: " << endl;
    matrizz8.imprimirMatriz();
    cout << endl;

    cout << "Multiplicación GxH: " << endl;
    result4 = matrizz7*matrizz8;
    result4.imprimirMatriz();
    cout << endl;

     */

    return 0;
}