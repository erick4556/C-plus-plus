/*17. Escriba un programa que intercambie por rengl�n los elementos de un arreglo bidimensional.
Los elementos del rengl�n 1 deben intercambiarse con los del rengl�n
N, los del rengl�n 2 con los del N - 1, Y as� sucesivamente.*/
#include <iostream>
#include <windows.h>
#include <iomanip>
#define fila 4
#define colum 4
using namespace std;

int main(){
int a[fila][colum]={{3,5,6,8},{2,3,6,1},{2,4,1,6},{3,6,9,0}};
int i;
int e;
for(i=0; i<fila; i++){
	cout<<"\n";
	for(e=0; e<colum; e++)
	cout<<setw(2)<<a[i][e]<<"\t";
	
}
getchar();
	
}

