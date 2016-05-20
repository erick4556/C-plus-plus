#include<iostream>
using namespace std;

main(){
	int f,c,num,n,x;
	float num1[3][4],sum1[4],sum2[3];
	float prom[3],prom2[4];
	cout<<"Ingrese un numero : ";
	cin>>num;
	if(num%2==0){
	cout<<"   Bienvenido al sistema\n\n";
		
		while(n!=4){
		cout<<"1.Arreglo bidimensional\n"<<"2.Numeros pares\n"<<"3.Numeros impares while\n"<<"4.Salir\n";
		cout<<"Ingrese una opcion :";
		cin>>n;
		switch(n){
		case 1:
	for(f=0;f<=2;f++)
		for(c=0;c<=3;c++){
			cin>>num1[f][c];
		}
		
		for(f=0;f<=2;f++){
			cout<<"\n\n";
			sum1[f]=0;
			cout<<f+1;
			for(c=0;c<=3;c++){
				cout<<"    "<<num1[f][c];
				sum1[f]=sum1[f]+num1[f][c];
				prom[f]=sum1[f]/4;
			}
			cout<<"   "<<sum1[f];
			cout<<"   "<<prom[f];
		}
		
		cout<<"\n";
	
		for(c=0;c<=3;c++){
			sum2[c]=0;
			for(f=0;f<=2;f++){
				sum2[c]=sum2[c]+num1[f][c];
				prom2[c]=sum2[c]/3;
			}
			cout<<"    "<<sum2[c];
		}
		
			cout<<"\n\n";
		
		for(c=0;c<=3;c++)
			cout<<"   "<<prom2[c];
				cout<<"\n\n";
			break;
				
			case 2:
				for(x=1;x<=100;x++){
					if(x%2==0)
						cout<<x<<"\n";
				}		
				break;
				
				case 3:
					while(x<=100){
						if(x%2==0)
							cout<<"";
							else
								cout<<x<<"\n";
					x++;
					}
					
					break;
					
					case 4:
						cout<<"\n\nGracias por visitarnos \n\n";
						break;
		}	
	}
			
	}else
		cout<<"No ingresaste al sistema\n";
			
	getchar();
		
}
