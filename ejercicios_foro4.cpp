// Dado un número entero n con n ≥ 2, escribir la matriz identidad de dimensión n × n.

//{0,0}{0,1}
//{1,0}{1,1}

// n = 2
// [1][0]
// [0][1]

// #include <iostream>
// using namespace std;

// int main()
// {

//     // Declaración de la matriz
//     int matIdentidad[25][25];

//     // Declaración de variable n
//     int n;

//     cout << "Ingrese el orden de la matriz a formar: ";
//     cin >> n;
//     cout << endl;

//     if (n < 2) {
//         cout << "El valor " << n << " no es un entero >= 2";
//     } else {
//         // Almacenar valores en la matriz
//     for (int i = 0; i < n; i++) // for recorre las filas
//     {
//         for (int j = 0; j < n; j++) // for recorre las columnas
//         {
//             if (i == j) {
//                 matIdentidad[i][j] = 1;
//             } else {
//                 matIdentidad[i][j] = 0;
//             }
//         }  
//     }

//     // imprimir la matriz
//     cout << "La matriz identidad de [" << n << "] x [" << n << "] es: " << endl << endl;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << " [" << matIdentidad[i][j] << "] ";
//         }
//         cout << endl; 
//     }

//     }

    


//  return 0;
// }










// Desarrolle un programa en c++ que dado un arreglo de orden n, muestre en pantalla la suma de las
// posiciones con números primos

// 1,2,3,4,5,6,7 -> suma = 2+3+5+7 = 17

// 10 / 2 = 5 -> residuo = 0  10 / 3 = 3.33 -> residuo 1, 0.67. 
// % =  10 % 2 -> 0; 10 % 3 -> 0.67

// #include <iostream>

// using namespace std;

// int main()
// {
//     // declaración n
//     int n;

//     cout << "Ingrese las dimensiones del arreglo: ";
//     cin >> n;

//     // declaración del array a
//     int a[n];

//     // declaración de suma
//     int suma = 0;

//     // lectura del array
//     for (int i = 0; i < n; i++)
//     {
//         cout << "[" << i + 1 << "]: ";
//         cin >> a[i];
//     }

//     // suma de primos
//     for (int i = 0; i < n; i++)
//     {
//         int numero = a[i];
//         bool primo = true; // declarando positiva
//         for (int j = 2; j < numero; j++) // numero = 5, {2-numero}
//         {
//             if (numero % j == 0) {
//                 primo = false;
//             }
//         }
//         if (primo == true && numero != 1) {
//             cout << numero << " ";
//             suma += numero;
//         }
//     }

// cout << endl;
//     // imprimir suma
//     cout << "La suma de los números primos es: " << suma << endl;

//     return 0;
// }














// Haga un programa que haga las operaciones con matrices: suma, resta, producto escalar, multiplicación y transpuesta

//[10][20]  +  [5][8]   = [15][28]
//[30][40]     [10][2]    [40][42]

#include <iostream>
using namespace std;

int main()
{
    // declaración de m y n
    int m, n;

    cout << "Número de filas: ";
    cin >> m;
    cout << "Número de Columnas: ";
    cin >> n;

    // declaración de matriz A, B Y C
    int A[m][n], B[m][n], C[m][n];

    // Llenado de matriz A

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = rand() % 20;
        }
    }

    // Llenado de matriz B

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            B[i][j] = rand() % 20;
        }
    }

    // imprimir matriz A

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "[" << A[i][j] << "]";
        }
        cout << endl;
    }

    cout << endl;

    // imprimir matriz B

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "[" << B[i][j] << "]";
        }
        cout << endl;
    }

    // suma A + B

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << endl;

    cout << "Suma: " << endl;

    // imprimir matriz C

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "[" << C[i][j] << "]";
        }
        cout << endl;
    }

    

    return 0;

}