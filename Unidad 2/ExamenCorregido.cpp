
	//Juan Pablo Soriano Gonz�lez 24041242

#include <stdio.h> //gets,puts,fflush,system
//#include <conio.h> //getch
//#include<stdlib.h> //system
#include <iostream> //cin, cout //Importante
#include <cmath> //operadores matematicos y constantes
#include <windows.h> //Para el SetConsole
using namespace std; //Importante
int main()
{
	SetConsoleOutputCP(CP_UTF8);//Configura la salida
	SetConsoleCP(CP_UTF8);//Configura la entrada
	
	// Juan Pablo Soriano González 24041242
	
	float cali1, cali2, cali3;
	float eva1, eva2, evaF;
	float caliEva1, caliEva2, caliEvaF, caliFinal;
	
	cout<<"*Las calificaciones deben de ser de 0 a 100*"<<endl;
	cout<<"Ingresa la primera calificacion: \n";
	cin>>cali1;
	cout<<"Ingresa la segunda calificacion: \n";
	cin>>cali2;
	cout<<"Ingresa la tercera calificacion: \n";
	cin>>cali3;
	system("pause");
	
	//Cálculos
	caliEva1 = round(cali1 * 0.10);	
	caliEva2 = round(cali2 * 0.10);
	caliEvaF = round(cali3 * 0.80);
	caliFinal = trunc(caliEva1+caliEva2+caliEvaF);
	
	//Impresión de datos
	system("cls");
	cout<<"\nSu calificacion de la primera evaluacion es: "<<caliEva1<< endl;
	cout<<"Su calificacion de la segunda evaluacion es: "<<caliEva2<< endl;
	cout<<"Su calificacion de la evaluacion final es: "<<caliEvaF<< endl;
	cout<<"Su calificacion final es: "<<caliFinal;
	
	return 0;
}
	
