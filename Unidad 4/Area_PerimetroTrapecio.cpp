
	//Juan Pablo Soriano Gonzalez 24041242

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
	
	float baseMayor, baseMenor, altura, lado1, lado2, area, perimetro;

    // Solicitar las bases y la altura al usuario
    cout << "Ingresa la base mayor del trapecio: ";
    cin >> baseMayor;
    cout << "Ingresa la base menor del trapecio: ";
    cin >> baseMenor;
    cout << "Ingresa la altura del trapecio: ";
    cin >> altura;

    // Cálculo del área
    area = ((baseMayor + baseMenor) * altura) / 2;
    cout << "El área del trapecio es: " << area << endl;

    // Solicitar los lados no paralelos
    cout << "Ingresa el primer lado no paralelo del trapecio: ";
    cin >> lado1;
    cout << "Ingresa el segundo lado no paralelo del trapecio: ";
    cin >> lado2;

    // Cálculo del perímetro
    perimetro = baseMayor + baseMenor + lado1 + lado2;
    cout << "El perímetro del trapecio es: " << perimetro << endl;

    return 0;
}
