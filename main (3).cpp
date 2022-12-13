#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
const int n=100;
const int m=100;
const int m=100;
void imprimir(int[][m]); 
void busqueda(int [][m],bool[],int);
int suma_filas(int [][m],int);

int main(int argc, char** argv) {
	
	int A[n][m];
	srand(time(0));
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			A[i][j]=10+rand()%(90);
			
imprimir(A);
 int x;			
cout<<"Ingrese un numero: x=";	
cin>>x;

cout<<"La sumatoria de las filas donde esta el numero "<<x<<" es: "<<suma_filas(A,x)<<endl;

	return 0;
}

void imprimir(int B[][m]){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cout<<setw(4)<<B[i][j];
		
		cout<<endl;	
	}
		
cout<<"\n\n";	
}

void busqueda(int B[][m],bool filas[],int x){
	for(int i=0;i<n;i++)
		filas[i]=false;
		
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			if(B[i][j]==x)
				filas[i]=true;
}

int suma_filas(int B[][m],int x){
bool filas[n];
int suma=0;
busqueda(B,filas,x);
	for(int i=0;i<n;i++)
		if(filas[i]){
			for(int j=0;j<m;j++)
				suma+=B[i][j];
		}
return suma;			
}
