#include<iostream>
#include<math.h>
using namespace std;
int main(void)
{
	double radio,area,perimetro;
	cout<<"Ingrese el radio del circulo:"<< endl;
	cin>>radio;
	
	area=M_PI*pow(radio,2);
	perimetro=2*M_PI*radio;
	
	cout<<"el area del circulo es:"<< area<< endl;
	cout<<"el perimetro de un circulo es:"<< perimetro <<endl;
	
	 
	
}


