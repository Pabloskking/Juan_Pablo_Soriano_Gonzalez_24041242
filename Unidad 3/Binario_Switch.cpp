
	//Juan Pablo Soriano Gonz�lez 24041242

	//Código de valores binarios con switch 

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
	
	char c;
	int opcion;

    // Solicitar un número
    cout << "Dame un valor binario 0/1: ";
    cin >> c;

    // Switch, falso(0), verdadero(1), Valor incorrecto(Cualquier otro caracter)
    switch (c) {
        case '0':
            cout << "Falso o apagado" << endl;
            break;
        case '1':
            cout << "Cierto o encendido" << endl;
            break;
        default:
            cout << "El valor no es valido" << endl;
            break;
    }
    
    // Menú 
    
    system("pause");
    system("cls");
    cout << "\nElige una opción." << endl;
    cout << "1. QUÍMICA" << endl;
    cout << "2. FÍSICA" << endl;
    cout << "3. MATEMÁTICAS" << endl;
    cout << "4. RECREO" << endl;
    cout << "Opción: ";
    cin >> opcion;
    
    //Switch
    
    switch (opcion) {
        case 1:
            cout << "\nSeleccionaste QUÍMICA" << endl;
            break;
        case 2:
            cout << "\nSeleccionaste FÍSICA" << endl;
            break;
        case 3:
            cout << "\nSeleccionaste MATEMÁTICAS" << endl;
            break;
        case 4:
            cout << "\nSeleccionaste RECREO" << endl;
            break;
        default:
            cout << "\nOpción no válida." << endl;
        }
    return 0;

}
