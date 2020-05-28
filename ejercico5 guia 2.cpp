#include "iostream"
#include "string.h"
#include "list"
using namespace std;
int main(void)
{ 
   char  texto[250],V1,V2,buscar_la_ultima_letra;
   int longitud=0;
   cout << endl << endl ; 
   cout << "Ingrese la palabra: ";
   cin.getline(texto,250,'\n');
   longitud= strlen(texto) ; 

   V1 = texto[0] ;

   V2 = strlen(texto) ;

   buscar_la_ultima_letra = texto[longitud-1];

   if (texto[0]==texto[longitud-1])
   { 
       cout << "La primera y ultima letra son iguales" <<endl <<endl;
   }
   else 
   { 
       cout << "La primera y ultima letra no son iguales"<< endl << endl;
   }
  return 0;


}
