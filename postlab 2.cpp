#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
	int a,b;
	cout<<"Enter First Integer: ";
	cin>>a;
	cout<<"Enter Second Integer: ";
	cin>>b;
	cout<<"( "<<a<<" + " <<b<< " )^2 = " <<a*a + 2*a*b + b*b; 
	cout<<"( "<<a<<" - " <<b<< " )^2 = " <<a*a - 2*a*b + b*b; 
	cout<<"( "<<a<<" + " <<b<< " )^3 = " <<a*a*a + 3*a*a*b + 3*a*b*b + b*b;
	cout<<"( "<<a<<" - " <<b<< " )^3 = " <<a*a + 2*a*b + b*b; 
	cout<<"( "<<a<<" + " <<b<< " )^2 = " <<a*a + 2*a*b + b*b; 
	
	printf("\n(%d - %d)^2 = %d ",a,b,a*a - 2*a*b + b*b);	
	printf("\n(%d + %d)^3 = %d ",a,b,a*a + 3*a*a*b + 3*a*b*b + b*b*b);
	printf("\n(%d - %d)^3 = %d ",a,b,a*a - 3*a*a*b + 3*a*b*b - b*b*b);
	printf("\n(%d)^2 - (%d)^2 = %d ",a,b,(a-b)*(a+b));
	printf("\n(%d)^3 - (%d)^3 = %d ",a,b,(a-b)^3 + 3*a*b*(a-b));
	printf("\n(%d)^3 - (%d)^3 = %d ",a,b,(a-b)*(a*a + a*b + b*b));
	printf("\n(%d)^3 + (%d)^3 = %d ",a,b,(a+b)*(a*a - a*b + b*b));
	printf("\n(%d)^3 + (%d)^3 = %d ",a,b,(a+b)^3 - 3*a*b*(a+b));
	
 }
