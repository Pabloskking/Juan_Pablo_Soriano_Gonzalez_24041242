
	//Juan Pablo Soriano González 24041242

#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
    int TAM_MAX = 100; //Tamaño máximo del arreglo para los valores cifrados
    string palabra;
    int valoresCifrados[100]; //Arreglo para guardar los valores cifrados
    int longitud = 0; //Contador para la cantidad de letras cifradas

    //Ingresar la palabra
    cout<<"Ingresa una palabra para cifrar (solo letras minúsculas): ";
    cin>>palabra;

    // Cifrar la palabra
    for(int i=0;i<palabra.length();i++){
        char c=palabra[i];
        int valor=0;
        switch (c){
            case 'a': valor = 1; break;
            case 'b': valor = 2; break;
            case 'c': valor = 3; break;
            case 'd': valor = 4; break;
            case 'e': valor = 5; break;
            case 'f': valor = 6; break;
            case 'g': valor = 7; break;
            case 'h': valor = 8; break;
            case 'i': valor = 9; break;
            case 'j': valor = 10; break;
            case 'k': valor = 11; break;
            case 'l': valor = 12; break;
            case 'm': valor = 13; break;
            case 'n': valor = 14; break;
            case 'o': valor = 15; break;
            case 'p': valor = 16; break;
            case 'q': valor = 17; break;
            case 'r': valor = 18; break;
            case 's': valor = 19; break;
            case 't': valor = 20; break;
            case 'u': valor = 21; break;
            case 'v': valor = 22; break;
            case 'w': valor = 23; break;
            case 'x': valor = 24; break;
            case 'y': valor = 25; break;
            case 'z': valor = 26; break;
            default: valor = 0; //Ignorar caracteres no válidos
        }
        valoresCifrados[longitud]=valor;
        longitud++;
    }

    //Mostrar la palabra cifrada
    cout<<"Palabra cifrada: ";
    for(int i=0;i<longitud;i++){
    	cout<<valoresCifrados[i]<<" ";
    }
    cout<<endl;

    // Descifrar la palabra
    cout<<"Palabra descifrada: ";
    for(int i=0;i<longitud;i++){
        char letra='?'; //Valor por defecto en caso de error
        switch(valoresCifrados[i]){
            case 1: letra = 'a'; break;
            case 2: letra = 'b'; break;
            case 3: letra = 'c'; break;
            case 4: letra = 'd'; break;
            case 5: letra = 'e'; break;
            case 6: letra = 'f'; break;
            case 7: letra = 'g'; break;
            case 8: letra = 'h'; break;
            case 9: letra = 'i'; break;
            case 10: letra = 'j'; break;
            case 11: letra = 'k'; break;
            case 12: letra = 'l'; break;
            case 13: letra = 'm'; break;
            case 14: letra = 'n'; break;
            case 15: letra = 'o'; break;
            case 16: letra = 'p'; break;
            case 17: letra = 'q'; break;
            case 18: letra = 'r'; break;
            case 19: letra = 's'; break;
            case 20: letra = 't'; break;
            case 21: letra = 'u'; break;
            case 22: letra = 'v'; break;
            case 23: letra = 'w'; break;
            case 24: letra = 'x'; break;
            case 25: letra = 'y'; break;
            case 26: letra = 'z'; break;
        }
        cout<<letra;
    }
    
    cout<<"===== Gracias por jugar =====";

    return 0;
}
