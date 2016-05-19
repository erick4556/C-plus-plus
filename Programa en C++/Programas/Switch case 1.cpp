#include <iostream>
using namespace std;

main(){
int x,num,n,nota,eda,m;
float sum=0,prom;
cout<<"Introduzca un numero :";
cin>>num;
if(num%2==0){
	cout<<"    Ingresaste al sistema\n\n";
	while(n!=3){
	cout<<"1.Entrar a ver promedio\n"<<"2.Entrar calcular edad\n"<<"3.Salir\n";
	cout<<"\nIntroduzca su opcion : ";
	cin>>n;
	switch(n){
		case 1:
			cout<<"\nEntraste a la funcion calcular promedio....\n\n";
			cout<<"Ingrese la cantidad notas a calcular : ";
			cin>>m;
			for(x=1;x<=m;x++){
				cout<<"Ingrese nota "<<x<<" : ";
				cin>>nota;
				sum+=nota;
			}
			prom=sum/m;
			cout<<"El promedio es : "<<prom<<"\n\n";
			break;
			
			case 2:
				cout<<"\nEntraste a la funcion calcular edad....\n\n";
				cout<<"Ingrese su edad : ";
				cin>>eda;
				if(eda>18)
					cout<<"Puede votar en las elecciones \n\n";
					else
						cout<<"No puede votar en las elecciones \n\n";
						break;
						
						case 3:
							
							break;
							
							default:
								cout<<"\nIngresaste una opcion erronea vuelva ingresar otra opcion...\n\n";
	}
}

	}else
	cout<<"No ingresaste hasta la próxima\n";

getchar();

}
