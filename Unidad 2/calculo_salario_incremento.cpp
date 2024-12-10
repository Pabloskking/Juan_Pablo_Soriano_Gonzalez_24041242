
	//Juan Pablo Soriano González 24041242

#include <stdio.h> //gets,puts,fflush,system
//#include <conio.h> //getch
//#include<stdlib.h> //system
#include <iomanip> // Para usar setprecision y controlar los decimales
#include <iostream> //cin, cout //Importante
#include <cmath> //operadores matematicos y constantes
#include <windows.h> //Para el SetConsole
using namespace std; //Importante
int main()
{
	SetConsoleOutputCP(CP_UTF8);//Configura la salida
	SetConsoleCP(CP_UTF8);//Configura la entrada	
	
	float salarioBase, porcentajeIncremento, salarioFinal;

    // Solicitar el salario base al usuario
    cout << "Ingresa el salario base: ";
    cin >> salarioBase;

    // Solicitar el porcentaje de incremento
    cout << "Ingresa el porcentaje de incremento anual: ";
    cin >> porcentajeIncremento;

    // Calcular el salario final
    salarioFinal = salarioBase + (salarioBase * porcentajeIncremento / 100);

    // Mostrar el salario final
    cout << "El salario final después del incremento es: " << salarioFinal << endl;

    return 0;
}
