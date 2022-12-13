#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
const int n=5;
const int m=5;
using namespace std;
void llenado(int [][m]);
void imprimir(int [][m]);
int sumatoria(int [][m],int);
int main() {

	int A[n][m],x;
	llenado(A);
	imprimir(A);
	cout<<"\nElija un numero de la matriz: \nx=";
	cin>>x;
	cout<<"La sumatoria de todas las filas donde esta el numero "<<x<<" es: "<<sumatoria(A,x)<<endl;
	return 0;
}


void llenado(int A[][m]){
	srand(time(0));
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			A[i][j]=10+rand()%(90);
}


void  imprimir(int A[][m]){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cout<<setw(3)<<A[i][j];
		cout<<endl;
	}
			
}


int sumatoria(int A[][m],int x){
int suma=0;
for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
		if(A[i][j]==x)
			{cout<<x<<" esta en la posicion ("<<i+1<<','<<j+1<<")\n";
				for(int k=0;k<m;k++)
				suma+=A[i][k];
			}
				

return suma;	
}
