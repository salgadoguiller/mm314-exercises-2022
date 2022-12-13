// EJEMPLO 1
// Hacer un programa en C++ que llene un array unidimensional de 20 enteros con números aleatorios del 0 al 20,
// luego de eso los muestre en pantalla y diga cuál es el elemento mayor y cuántas veces se repite.

//{1,2,5,3,4,5,7,8,32,1,2,3,5,6,1,32,4,8,6,5}

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int longitud = 20;
    int numeros[longitud]; // inicialización del arreglo numeros

    // llenar array

    for (int i = 0; i < longitud; i++)
    {
        numeros[i] = rand() % 10; // se asignan valores del 0 - 10
    }

    // imprimir el array

    for (int i = 0; i < longitud; i++)
    {
        cout << numeros[i];
        if (i != longitud - 1)
        {
            cout << ", ";
        }
        else
        {
            cout << endl;
        }
    }

    // obtener numero mayor

    int mayor = numeros[0];

    for (int i = 0; i < longitud; i++)
    {
        if (mayor < numeros[i])
        {
            mayor = numeros[i]; // obteniendo el número mayor
        }
    }

    // determinar cuantas veces se repite

    int totalRepetidos = 0;

    for (int i = 0; i < longitud; i++)
    {
        if (mayor == numeros[i])
        {
            totalRepetidos++; // totalRepetidos = totalRepetidos + 1
        }
    }

    cout << "EL MAYOR ES: " << mayor << endl;
    cout << "Y SE REPITE: " << totalRepetidos; 
    (totalRepetidos == 1) ? cout << " VEZ" : cout << " VECES"; // 1 vez, 5 veces
    cout << endl;

    return EXIT_SUCCESS;
}

// EJEMPLO 2

// Leer una matriz cuadrada de orden 2 (2 filas y 2 columnas), y escribir la suma de todos
// los números que no están en la diagonal principal

// {0,0}{0,1}
// {1,0}{1,1}

//[10][23]
//[45][67]

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int filas = 2;
    int A[filas][filas]; // A[2][2]
    int suma = 0;

    // lectura del array

    for (int i = 0; i < filas; i++) // Recorre filas
    {
        for (int j = 0; j < filas; j++) // Recorre columnas
        {
            cout << "[" << i << "][" << j << "]: ";
            cin >> A[i][j]; // Lectura de valores
        }
    }

    // sumatoria

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < filas; j++)
        {
            if (i != j)
            {
                suma += A[i][j];
            }
        }
    }

    cout << "Suma: " << suma << endl;

    return EXIT_SUCCESS;
}

// EJEMPLO 3

// Array tridimensional. Se declara un array tridimensional para almacenar las temperaturas
// de 2 distintas horas de la mañana, tarde y noche durante tres días de la semana

// Lunes: 7am - 28.5, 9am - 30 ... 10pm - 22 = media / (jornadas * horas)

#include <iostream>
#include <ctime>
using namespace std;

int main()
{

    int dias = 3;
    int jornadas = 3;
    int horas = 2;
    int media;

    float A[dias][jornadas][horas];

    // lectura de las temperaturas

    for (int i = 0; i < dias; i++) // recorre los días
    {
        for (int j = 0; j < jornadas; j++) // recorre las jornadas
        {
            for (int k = 0; k < horas; k++) // recorre las horas
            {
                A[i][j][k] = rand() % 40; // llenado del array
            }
        }
    }

    // imprimir el array

    for (int i = 0; i < dias; i++) // recorre los días
    {
        cout << "Dia: " << i + 1 << endl;
        for (int j = 0; j < jornadas; j++) // recorre las jornadas
        {
            for (int k = 0; k < horas; k++) // recorre las horas
            {
                cout << "[" << A[i][j][k] << "]";
            }
            cout << endl;
        }
        cout << endl;
    }

    // cálculo de la media

    for (int i = 0; i < dias; i++)
    {
        media = 0;
        for (int j = 0; j < jornadas; j++)
        {
            for (int k = 0; k < horas; k++)
            {
                media += A[i][j][k];
            }
        }
        cout << "Dia " << i + 1 << ": " << media / (jornadas * horas) << endl;
    }

    return EXIT_SUCCESS;
}








