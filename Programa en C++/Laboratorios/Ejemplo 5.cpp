//Arreglo unidimensional sencillo.
#include <iostream>
#include <conio.h>

using namespace std;

main()
{
      int i,datos[5];
      //Entrada
      cout<<"Entrada de datos\n";
      for(i=0;i<=4;i++){                  
      cout<<"Dato["<<i+1<<"]:";
      cin>>datos[i];
      
      }    
      system("cls");
       //Salida
      cout<<"Entrada de datos\n\n\n";
      cout<<"N°         DATOS  \n";
      for(i=0;i<=4;i++){                  
      
      cout<<i+1<<"              "<<datos[i]<<"\n";
      
      
      }    
      
      
system("PAUSE");
        
             
}
