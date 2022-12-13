#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	// Datos de hojas de ventas de empleados
	int numero_hojas = 12;
	int numero_campos = 3;
	// {Empleado, Producto, Cantidad}
	int hojas[numero_hojas][numero_campos] = {
		{1, 1, 2}, {1, 1, 4}, {1, 2, 6},
		{2, 2, 2}, {2, 3, 4}, {2, 4, 6},
		{3, 4, 2}, {3, 5, 4}, {3, 5, 6},
		{4, 1, 10}, {4, 1, 12}, {4, 1, 6}
	};
	
	// Resumen de ventas por vendedor y producto
	int numero_vendedores = 4;
	int numero_productos = 5;
	int ventas[numero_vendedores + 1][numero_productos + 1] = {};
	for(int i = 0; i < numero_hojas; i++){
		int vendedor = hojas[i][0];
		int producto = hojas[i][1];
		int cantidad = hojas[i][2];
	    
	    // Total vendedor por producto
	    ventas[vendedor - 1][producto - 1] += cantidad;
		// Total vendedor
	    ventas[numero_vendedores][producto - 1] += cantidad;
		// Total Producto
	    ventas[vendedor - 1][numero_productos] += cantidad;
	    // Total total
	    ventas[numero_vendedores][numero_productos] += cantidad;
	}

	// Imprimir resultado
	// Encabezado de la tabla
	cout << left << setw(14) << "Vendedor";
	cout << left << setw(14) << "Producto 1";
	cout << left << setw(14) << "Producto 2";
	cout << left << setw(14) << "Producto 3";
	cout << left << setw(14) << "Producto 4";
	cout << left << setw(14) << "Producto 5";
	cout << left << setw(14) << "Total Ventas" << endl;
	cout << "------------------------------------------------------------------------------------------------" << endl;

	// Filas de la tabla
	for(int i = 0; i < numero_vendedores + 1; i++){
		if (i < numero_vendedores) {
			cout << setw(14) << i + 1;
		} else {
			cout << setw(14) << "Total Ventas";	
		}
		
		for(int j = 0; j < numero_productos + 1; j++){
		    cout << setw(14) << ventas[i][j];
		}

		cout << endl;
	}
	
	return 0;
}
