#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int numero;
	printf("Introduce numero: ");
	scanf("%g",&numero);
	if (numero<0){
		printf(" El numero es negativo\n ",numero);
	}else if (numero>0){
		printf("El numero es positivo\n",numero);
	}else{
		printf("el numero es cero\n",numero);
	};
	
	return 0;	
}
