
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
	
	float celsius, fahrenheit, kelvin;

    // Solicitar la temperatura en Celsius al usuario
    cout << "Ingresa la temperatura en grados Celsius: ";
    cin >> celsius;

    // Conversión a Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // Conversión a Kelvin
    kelvin = celsius + 273.15;

    // Mostrar resultados
    // Mostrar resultados con dos decimales
    cout << fixed << setprecision(2);
    cout << "La temperatura en Fahrenheit es: " << fahrenheit << "°F\n";
    cout << "La temperatura en Kelvin es: " << kelvin << " K" << endl;

    return 0;
}
