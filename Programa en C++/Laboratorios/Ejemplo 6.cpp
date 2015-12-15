//Arreglo unidimensional sencillo con arreglo de tipo cadena.
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

main()
{
      int i;
      char dato[5][25];
      //Entrada
      cout<<"Entrada de datos\n";
      for(i=0;i<=4;i++)
      {                  
      cout<<"Dato["<<i+1<<"]:";
      cin>>dato[i];
      system("cls");
      }   
      
      system("cls");
       //Salida
      cout<<"Salida de datos\n\n\n";
      cout<<"N°         DATOS  \n";
      for(i=0;i<=4;i++)
      {                  
      
      cout<<i+1<<"              "<<dato[i]<<"\n";
      
      
      }    
      
      
return 0;
        
             
}
