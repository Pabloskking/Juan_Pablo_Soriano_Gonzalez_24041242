
	//Juan Pablo Soriano Gonzalez 24041242

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
    int *dirz = &z; // Declara puntero (int *) y le asigna el contenido de la dirección de z
    
	//Operaciones
    
	cout<<x<<"+"<<y<<"="<<x+y<<"\n";//13 //Suma
	cout<<x<<"-"<<y<<"="<<x-y<<"\n";//7  //Resta
	cout<<x<<"*"<<y<<"="<<x*y<<"\n";//30 //Multiplicación 
	cout<<x<<"/"<<y<<"="<<x/y<<"\n";//3 //División
	cout<<x<<" residuo% "<<y<<"="<<x%y<<"\n";//1 //Residuo
	cout<<x<<" incrementado="<<++x<<" o bien "<<x+1<<"\n"; //Incrementado
	cout<<x--<<" decrementado\n";//x=x-1 //Decrementado
	
	printf("Dame un número entero: ");
	cin>>x;
	x>0?cout<<"positivo ":cout<<" negativo  "; //Si x es mayor a x imprime "Positivo" pero si no lo es imprime "Negativo"
	cout<<"\nDame un número entero: ";
	cin>>x;
	x>0?cout<<"positivo ":x<0?cout<<" negativo ":cout<<"es cero";//doble pregunta para considerar el cero
		
	x=0;
	cout<<"\nx="<<x<<"\n";
	cout<<"x++ = "<<x++<<"\n";
	cout<<"x="<<x<<"\n";
	cout<<"++x = "<<++x;
	cout<<"\nx="<<x<<"\n";
	cout<<"y="<<y<<". La dirección de y es "<<&y<<"\n";	
	

    // Imprimir el valor de y y la dirección almacenada en x
    cout << "El valor de z: " << z << endl;               // Imprime el valor de y
    cout << "La dirección de z (&z): " << &z << endl;     // Imprime la dirección de y
    cout << "La dirección de z almacenada en dirz: " << dirz << endl;
	cout<<"El contenido en *dirz: "<<*dirz<<endl;
}