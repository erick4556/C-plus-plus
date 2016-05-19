#include <iostream>
using namespace std;

int sum(int a, int b);
int multi(int a,int b);
int div(int a, int b);
void saludos(int d, int f);

int sum(int a, int b)
{
	int sum=0;
	sum=a+b;
	return sum;
}

int multi(int a, int b)
{
	int multi;
	multi=a*b;
	return multi;
}

int div(int a, int b)
{
	int divi;
	divi=a/b;
	return divi;
}

void saludos(int d, int f)
{
	int multi;
	multi=d*f;
	cout<<"La otra multiplicacion es = "<<multi<<"\n";
	cout<<"Hola amiguitos esto es c++";
}

main()
{
	int num1, num2;
	cout<<"Introduzca los numeros\n";
	cin>>num1;
	cin>>num2;
	
	cout<<"La suma es "<<sum(num1,num2)<<"\n";
	cout<<"La multiplicacion es "<<multi(num1,num2)<<"\n";
	cout<<"La division es "<<div(num1,num2)<<"\n";
	
	saludos(num1,num2);
}
