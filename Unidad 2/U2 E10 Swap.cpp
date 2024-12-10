
	//Juan Pablo Soriano González 24041242

#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int a,b,c;
	cout<<"Dame el valor de a: ";
	cin>>a;
	cout<<"Dame el valor de b: ";
	cin>>b;
	c=a;
	a=b;
	b=c;
	cout<<"a="<<a<<" b="<<b;
	return 0;
}
