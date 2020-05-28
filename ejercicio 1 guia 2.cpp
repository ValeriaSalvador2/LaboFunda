#include<iostream>
using namespace std;

int main()
{
	int n1,n2;
	cout<<"ingrese numero mayor"<<endl;
	cin>>n1;
	cout<<"ingrese numero menor"<<endl;
	cin>>n2;
	if(n1 % n2==0) 
	{
		cout<< n2 <<" es divisible entre "<< n1 <<endl;
	} 
	else
	{
		cout<<n2 <<" no es divisible entre "<< n1<<endl;
	}
	
	return 0;
}
 
