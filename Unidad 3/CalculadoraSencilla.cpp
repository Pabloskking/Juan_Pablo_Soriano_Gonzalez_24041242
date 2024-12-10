
	//Juan Pablo Soriano Gonz�lez 24041242

#include <stdio.h> //gets,puts,fflush,system
//#include <conio.h> //getch
//#include<stdlib.h> //system
#include <iostream> //cin, cout //Importante
#include <windows.h> //Para el SetConsole
using namespace std; //Importante
int main()
{
	SetConsoleOutputCP(CP_UTF8);//Configura la salida
	SetConsoleCP(CP_UTF8);//Configura la entrada
	
	float num1, num2, resultado;
	float sum, res, mul, div;
    int opcion;

    // Solicitar los dos números
    cout << "Dame el primer número: ";
    cin >> num1;
    cout << "Dame el segundo número: ";
    cin >> num2;

    // Menú para seleccionar la operación
    cout << "\nElige la operación que deseas realizar: " << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "Opción: ";
    cin >> opcion;

	//Solución con switch

    // Realizar la operación según la opción elegida
    switch (opcion) {
        case 1:
            resultado = num1 + num2;
            cout << "\nLa suma es: " << resultado << endl;
            break;
        case 2:
            resultado = num1 - num2;
            cout << "\nLa resta es: " << resultado << endl;
            break;
        case 3:
            resultado = num1 * num2;
            cout << "\nLa multiplicación es: " << resultado << endl;
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "\nLa división es: " << resultado << endl;
            } else {
                cout << "\nError: No se puede dividir entre cero." << endl;
            }
            break;
        default:
            cout << "\nOpción no válida." << endl;
            break;
    }

	//Solución con if

	/*if (opcion == 1) {
        cout << "\nEsta es tu suma: " << sum;
    } else if (opcion == 2) {
        cout << "\nEsta es tu resta: " << res;
    } else if (opcion == 3) {
        cout << "\nEsta es tu multiplicación: " << mul;
    } else if (opcion == 4) {
        if (num2 != 0) {
            cout << "\nEsta es tu división: " << div;
        } else {
            cout << "\nError: No se puede dividir entre cero.";
        }
    } else {
        cout << "\nOpción no válida.";
    }*/
    return 0;
}
