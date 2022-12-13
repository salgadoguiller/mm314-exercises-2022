#include<iostream>
#include <random>
#include <math.h>
#include <iomanip>
/*
Defina el prototitpo de la funcion Informe la cual toma como argumento los coefcientes enteros a,b,c de la funcion cuadratica y no retorna ningun valor
*/

/*
Defina el prototitpo de la funcion AleatorioA la cual no toma ningun argumento y retorna un numero entero
*/

/*
Defina el prototitpo de la funcion AleatorioB la cual no toma ningun argumento y retorna un numero entero
*/

/*
Defina el prototitpo de la funcion AleatorioC la cual no toma ningun argumento y retorna un numero entero
*/

/*
Defina el prototitpo de la funcion Concavidad la cual toma como argumento los coefcientes entero a,b,c de la funcion cuadratica y no retorna ningun valor
*/

/*
Defina el prototitpo de la funcion Vx la cual toma como argumento los coefcientes entero a,b,c de la funcion cuadratica y retorna un valor decimal
*/

/*
Defina el prototitpo de la funcion Vertice la cual toma como argumento los coefcientes enteros a,b,c de la funcion cuadratica y no retorna ningun valor
*/

/*
Defina el prototitpo de la funcion EjeSimetria la cual toma como argumento los coefcientes enteros a,b,c de la funcion cuadratica y no retorna ningun valor
*/

/*
Defina el prototitpo de la funcion evaluarFuncion la cual toma como argumento los coefcientes enteros a,b,c de la funcion cuadratica y un valor decimal x
*/


int main() {
    double a{} , b{} , c{};
    size_t opc{};
    std::cout << "1. Aleatorio" << std::endl
              << "2. Determinista" << std::endl;
    while( opc < 1 || opc > 2 ) {
        std::cin>>opc;
    }
    if( opc == 1){
        a=AleatorioA();
        b=AleatorioB();
        c=AleatorioC();
        std::cout << a << std::endl
                  << b << std::endl
                  << c << std::endl;
    }else{
        std::cin>>a;
        std::cin>>b;
        std::cin>>c;
    }
    Informe(a,b,c);
    return 0;
}
/*
Defina las instrucciones de la funcion Informa, esta funcion solo hace el llamado a la funcion Concavidad, a la funcion Vertice y a la funcion EjeSimetria
*/

/*
Defina las instrucciones de la funcion Concavidad, esta funcion despliega en pantalla el mensaje "Concavidad: Positiva" o el mensaje "Concavidad: Negativa"
segun el valor del coeficiente a de la funcion cuadratica
y por ultimo realiza un cambio de linea 
*/

/*
Defina las instrucciones de la funcion AleatorioA la cual retorna un numero entero aleatorio entre 1 y 10 inclusive
utilice los comandos default_random_engine generador y uniform_int_distribution de la libreria random
o puede utilizar srand o rand y use las librerìas adecuadas*/

/*
Defina las instrucciones de la funcion AleatorioB la cual retorna un numero entero aleatorio entre -5 y 5 inclusive
utilice los comandos default_random_engine generador y uniform_int_distribution de la libreria random
o puede utilizar srand o rand y use las librerìas adecuadas*/

/*
Defina las instrucciones de la funcion AleatorioC la cual retorna un numero entero aleatorio entre -10 y 10 inclusive
utilice los comandos default_random_engine generador y uniform_int_distribution de la libreria random
o puede utilizar srand o rand y use las librerìas adecuadas*/

/*
Defina las instrucciones de la funcion evaluarFuncion la cual retorna la evaluacion del numero x en la funcion
*/


/*
Defina las instrucciones de la funcion Vx la cual retorna el valor de la coordenada en x del vertice de la funcion cuadratica
*/


/*
Defina las instrucciones de la funcion Vertice la cual despliega en pantalla el mensaje "Vertice(#1,#2)" donde #1 y #2 representan los valores
correspondientes a las coordenadas del vertice de la funcion cuadratica
por ultimo realiza un cambio de linea
*/

/*
Defina las instrucciones de la funcion EjeSimetria la cual despliega en pantalla el mensaje "x=#1" donde #1 representa el valor correspondiente 
a la recta vertical
*/
