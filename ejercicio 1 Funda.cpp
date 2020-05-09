#include<stdio.h>

int main()
{
	
	float P1,P2,P3,Promedio;
	
	printf("Introducir Primera Calificacion:");
	scanf("%f",&P1);
	printf("Introducir Segunda Calificacion:");
	scanf("%f",&P2);
	printf("Introducir Terecera Calificacion:");
	scanf("%f",&P3);
	
	Promedio=(P1+P2+P3)/3;

    printf("el promedio es %.2f",Promedio);
    
	return 0;
}
