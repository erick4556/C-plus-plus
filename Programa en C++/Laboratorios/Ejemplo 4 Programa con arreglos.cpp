/*Tenemos 5 nombres de empleado dnd datos entrada sta nombre del emplead,o salario por hora y horas trabajadas, 
haga programa aparesaca apraescaa nombre,salariobruto y el salario neto. Manipular 5 registro*/
#include <iostream>
using namespace std;
main()
{
int ht[5],x;
char nombre[5][15];
float sneto[5],sal_bruto[5],sph[5],direc[5];
//Entrada de datos
for(x=0;x<=4;x++)
{
     cout<<"\n Ingrese el nombre de empleado= ";
     cin>>nombre[x];
      cout<<"\nIngrese horas trabajdas por empleados= ";
      cin>>ht[x];
      cout<<"\nIngrese salario por hora= ";
      cin>>sph[x];
      cout<<"\nIngrese la direccion del empleado= "; 
      cin>>direc[x];
      sal_bruto[x]=ht[x]*sph[x];
      sneto[x]=sal_bruto[x]-direc[x]; 
}
//Salida de datos
cout<<"\n               R E P O R T E   D E   E M P L E A D O S";
cout<<"\n    N°         NOMBRE DE EMPLEADO     SALARIO BRUTO     SALARIO NETO  ";   
for(x=0;x<=4;x++)
{
cout<<"\n     "<<x+1<<"    "<<nombre[x]<<"            "<<sal_bruto[x]<<"        "<<sneto[x];     
}
getchar();

}
