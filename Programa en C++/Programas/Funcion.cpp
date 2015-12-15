#include <iostream>
using namespace std;

void sumar(int a, int b);
void funcion();

main(){
	int num1,num2,suma;
	cin>>num1;
	cin>>num2;
	sumar(num1,num2);
	funcion();
	return 0;
}

void sumar(int a, int b){
	
	int sum=0;
	sum=a+b;
	cout<<"La suma es "<<sum<<"\n";
}

void funcion(){
	cout<<"Esto es un saludo";
}
