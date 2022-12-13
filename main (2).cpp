#include<iostream>
#include <string>

using namespace std;

int main() {
    string parrafo;
    string linea;
    string cadena1;
    string cadena2;
    int posicion = -1;
    int numero_encuentros = 0;

    cout << "Ingrese un parrafo:" << endl;

    do {
        getline(cin, linea);
        parrafo += linea + "\n";
    } while (linea.length() > 0);

    cout << "Ingrese cadena 1:" << endl;
    getline(cin, cadena1);

    cout << "Ingrese cadena 2:" << endl;
    getline(cin, cadena2);

    while (true) {
        posicion = parrafo.find(cadena1, posicion + 1);

        if (posicion == string::npos) {
            break;
        } else {
            parrafo.replace(posicion, cadena1.length(), cadena1 + cadena2);
            numero_encuentros++;
        }
    }

    cout << endl;
    cout << "==========================================" << endl;
    cout << "Parrafo:" << endl;
    cout << parrafo << endl;
    cout << "Numero de palabras reemplazadas:";
    cout << numero_encuentros << endl;
    cout << "==========================================" << endl;
}

