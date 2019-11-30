
#ifndef PD4_FUNCIONES_H
#define PD4_FUNCIONES_H

#include <fstream>
#include <regex>
#include "matriz_conhilos.h"

template <typename T>
void leer(const string &fileName, Matriz<T> &matrizz1, Matriz<T> &matrizz2) {

    int n=0, m=0, n2=0, m2=0, contador = 0;
    T a;

    vector<T> num;
    vector<T> num2;

    ifstream inFile(fileName);

    if (inFile.is_open()) {
        string line;
        while (getline(inFile, line)) {

            istringstream iss(line);
            vector<string> parts((istream_iterator<string>(iss)), istream_iterator<string>());

            if (contador == 0) {
                n = stoi(parts[0]);
                m = stoi(parts[1]);
            }

            if (0 < contador && contador <= n) {
                for (auto &part : parts) {
                    a = stoi(part);
                    num.push_back(a);
                }
            }

            if (contador == (n + 1)) {
                n2 = stoi(parts[0]);
                m2 = stoi(parts[1]);
            }

            if (contador > (n + 1)) {
                for (auto &part : parts) {
                    a = stoi(part);
                    num2.push_back(a);
                }
            }
            contador++;
        }

        matrizz1.filas=n;
        matrizz1.columnas=m;
        matrizz2.filas=n2;
        matrizz2.columnas=m2;

    } else
        cout<<"ERROR";

    inFile.close();

    matrizz1.llenarMatriz(num);
    matrizz2.llenarMatriz(num2);
}




#endif //PD4_FUNCIONES_H
