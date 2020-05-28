#include<iostream>
#include <cstring>

using namespace std;

int main()
{
	
	char texto[250];
	cout<<"introduce palabra: ";
	cin>>texto;
	cout<<"Has tecleado:" << strlen(texto)<<" letras"<<endl;
	{
	if(strlen(texto)>10){
		cout<<"longitud mayor a 10"<<endl<<endl;
	}else{
		cout<<"longitud menor a 10"<<endl<<endl;
	}
	}
	{
     if(strlen(texto)%2==0)
	{
		cout<<"la longitud es par"<<endl<<endl;
	}else{
		cout<<"la longitud es impar"<<endl<<endl;
		
		}
	}
	
	
	
	return 0;
}
