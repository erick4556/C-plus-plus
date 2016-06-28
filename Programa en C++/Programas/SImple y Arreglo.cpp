#include <iostream>
using namespace std;

/*// Problema 15
main(){
	int n,x,num,cont=0;
	
	cout<<"Ingrese la cantidad de numero : ";
	cin>>n;
	
	for(x=1;x<=n;x++){
		cout<<"Ingrese numero : ";
		cin>>num;
		if(num<10)
			cont++;
	}
	cout<<"La cantidad de elementos menores que 10 son : "<<cont;
	getchar();
	
}*/

//Problema 16

main(){
	
	int f,c,a,s;
	cout<<"Cantidad de filas : ";
	cin>>f;
	cout<<"Cantidad de columnas : ";
	cin>>c;
	
	int vec[f][c],produc[f];
	cout<<"Ingrese los numeros : \n";
	for(a=0;a<f;a++)
		for(s=0;s<c;s++){
			cin>>vec[a][s];
		}
	
	for(a=0;a<f;a++){
		cout<<"\n\n";
		produc[a]=1;
		cout<<a<<"   ";
		for(s=0;s<c;s++){
			cout<<vec[a][s]<<"   ";
			produc[a]=produc[a]*vec[a][s];
	}
	if(a%2==0)
		cout<<"";
		else
	cout<<produc[a];
}
	getchar();
}
