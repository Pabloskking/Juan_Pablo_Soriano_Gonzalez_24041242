
	//Juan Pablo Soriano Gonz醠ez 24041242

#include<stdio.h>
#include <iostream>
#include<Windows.h>
using namespace std;
main()
{
	SetConsoleOutputCP(CP_UTF8);//Controlar salida
	SetConsoleCP(CP_UTF8);//Controlar entrada
	int x=10,y=3;
	int z = 10; // Declara variable int con valor 10
    int *dirz = &z; // Declara puntero (int *) y le asigna el contenido de la direcci贸n de z
	cout<<x<<"+"<<y<<"="<<x+y<<"\n";//13
	cout<<x<<"-"<<y<<"="<<x-y<<"\n";//7
	cout<<x<<"*"<<y<<"="<<x*y<<"\n";//30
	cout<<x<<"/"<<y<<"="<<x/y<<"\n";//3
	cout<<x<<" residuo% "<<y<<"="<<x%y<<"\n";//1
	cout<<x<<" incrementado="<<++x<<" o bien "<<x+1<<"\n";
	cout<<x--<<" decrementado\n";//x=x-1
	
	printf("Dame un n煤mero entero: ");
	cin>>x;
	x>0?cout<<"positivo ":cout<<" negativo  ";
	cout<<"\nDame un n煤mero entero: ";
	cin>>x;
	x>0?cout<<"positivo ":x<0?cout<<" negativo ":cout<<"es cero";//doble pregunta para considerar el cero
		
	x=0;
	cout<<"\nx="<<x<<"\n";
	cout<<"x++ = "<<x++<<"\n";
	cout<<"x="<<x<<"\n";
	cout<<"++x = "<<++x;
	cout<<"\nx="<<x<<"\n";
	cout<<"y="<<y<<". La direcci贸n de y es "<<&y<<"\n";	
	

    // Imprimir el valor de y y la direcci贸n almacenada en x
    cout << "El valor de z: " << z << endl;               // Imprime el valor de y
    cout << "La direcci贸n de z (&z): " << &z << endl;     // Imprime la direcci贸n de y
    cout << "La direcci贸n de z almacenada en dirz: " << dirz << endl;
	cout<<"El contenido en *dirz: "<<*dirz<<endl;
}
