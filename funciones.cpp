// EJEMPLO 1
//Calcular número mínimo entre 2 números por medio de una función


// #include <iostream>
// using namespace std;

// int min(int x, int y){
//     int menor;
//     if (x < y) {
//         menor = x; //return x;
//     } else {
//         menor = y; //return y;
//     }

//     return menor;
// }

// int main()
// {
//     int numero1, numero2, menor;
//     cout << "Ingrese numero 1: ";
//     cin >> numero1;

//     cout << "Ingrese numero 2: ";
//     cin >> numero2;

//     menor = min(numero1, numero2);

//     cout << endl << "El menor es: " << menor << endl;

//     return 0;
// }





















// EJEMPLO 2
//Calcular la norma euclídea de la tres coordenadas de un vector de R3
//Norma(x,y,z) = raiz(x^2 + y^2 + z^2)

// #include <iostream>
// #include <math.h>
// using namespace std;

// float norma(float x, float y, float z) {
//     float calculo = 0;

//     calculo = sqrt(x*x + y*y + z*z);// calcula la raíz de un número

//     return calculo;
// }

// int main()
// {
//     float coordenada1, coordenada2, coordenada3;

//     cout << " vector: (" << 3 << ", " << 4 << ", " << 5 << ")";
//     cout << " norma: " << norma(3,4,5) << endl; // llamado a función norma
//     cout << "Introduzca las tres coordenadas del vector R3: ";
//     cin >> coordenada1 >> coordenada2 >> coordenada3;
//     cout << " vector: (" << coordenada1 << ", " << coordenada2 << ", " << coordenada3 << ")";
//     cout << " norma: " << norma(coordenada1,coordenada2,coordenada3) << endl; // llamado a función norma


//     return 0;
// }
















// EJEMPLO 3
//Paso de parámetros por referencia a una función

// #include <iostream>
// using namespace std;

// void intercambio(int &x, int &y){
//     int aux = x;
//     x = y;
//     y = aux;
// }

// int main()
// {
//     int x = 20, y = 40;
//     cout << " antes de la llamada a intercambio ";
//     cout << " x= " << x << " y=" << y << endl;
//     intercambio(x, y); // enviando parametros con ubicación en memoria
//     cout << " después de la llamada a intercambio ";
//     cout << " x= " << x << " y=" << y << endl;

//     return 0;
// }








//EJEMPLO 4
//Matriz Amxn y un vector Xn -> generar un nuevo vector Ym
// Y[1] = A[1][0] x X[0] + A[1][1] x X[1] + ... + A[1][n] x X[n]
// Y[2] = A[2][0] x X[0] + A[2][1] x X[1] + ... + A[2][n] x X[n]

#include <vector>
#include <iostream>
using namespace std;
const int m = 2;
const int n = 3;

vector<int> calculo (int A[m][n], vector<int> X) {
    vector<int> Y(m);

    for (int i = 0; i < m; i++) // recorre filas
    {
        int suma = 0; // inicializamos el acumulador suma
        for (int j = 0; j < n; j++) //  recorre columnas
        {
            //suma++; suma = suma + 1
            suma += A[i][j] * X[j]; // suma = suma + A[i][j] * X[j];
            Y.at(i) = suma;
        } 
    }
    return Y;

}

void imprimirMatriz(int matriz[m][n]){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "[" << matriz[i][j] << "]";
        }
        cout << endl;
    }

}

void imprimirVector(vector<int> V) {
    for (int i = 0; i < V.size(); i++)
    {
       cout << V[i];
       if (i != V.size() - 1) {
        cout << ", ";
       } else {
        cout << endl;
       }
    }
}

int main() {
    int A[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = rand() % 20;
        }
    }

    cout << "Matriz A: " << endl;
    imprimirMatriz(A);

    vector<int> X(n);

    for (int i = 0; i < X.size(); i++)
    {
        X[i] = rand() % 10;
    }

    cout << "Vector X: " << endl;
    imprimirVector(X);

    cout << "Vector Y: " << endl;
    vector<int> Y(m);

    Y = calculo(A, X);

    imprimirVector(Y);

    cout << endl;
    


    return 0;
}