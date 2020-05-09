#include<iostream>
#include<math.h>
using namespace std;

int main(void)
{
	int a,b,c;
	
	float x1,x2;
	
	cout<<"inserte valor de a\n";
	cin>>a;
	
	cout<<"inserte valor de b\n";
	cin>>b;
	
	cout<<"inserte valor de c\n";
	cin>>c;
	
	x1=(-b+(sqrt(b*b-4*a*c)))/(2*a);
	x2=(-b-(sqrt(b*b-4*a*c)))/(2*a);
	
	cout<<" x1=";
	cout<< x1;
	
	cout<<" x2=";
	cout<< x2;
	
	
	
}
