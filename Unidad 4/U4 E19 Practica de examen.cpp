
	//Juan Pablo Soriano González 24041242

#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
    string palabra, palabraCifrada = "", palabraDescifrada = "";
    int opcion;

    do {
        system("cls");
        cout<<"=== Juego de Cifrado de Palabras ==="<<endl;
        cout<<"1. Cifrar una palabra"<<endl;
        cout<<"2. Descifrar una palabra"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Elige una opcion: ";
        cin>>opcion;

        if(opcion == 1){
        	cout<<"Ingresa una palabra o frase para cifrar: ";
            cin.ignore(); //Para ingresar palabras con espacios
            getline(cin, palabra);
            //cin>>palabra
            palabraCifrada = "";

            for(int i=0;i<palabra.length();i++){
                char c=palabra[i];
                switch(c){
                    case 'a': palabraCifrada += '1'; break;
                    case 'e': palabraCifrada += '2'; break;
                    case 'i': palabraCifrada += '3'; break;
                    case 'o': palabraCifrada += '4'; break;
                    case 'u': palabraCifrada += '5'; break;
                    case ' ': palabraCifrada += '_'; break;
                    default: palabraCifrada += c; break;
                }
            }
            cout<<"Palabra cifrada: "<<palabraCifrada<<endl;
            system("PAUSE");
        } 
        else if(opcion==2){
            cout<<"Ingresa una palabra cifrada para descifrar: ";
            cin.ignore();
            getline(cin, palabraCifrada);
            palabraDescifrada="";

            for (int i=0;i<palabraCifrada.length();i++) {
                char c=palabraCifrada[i];
                switch(c){
                    case '1': palabraDescifrada += 'a'; break;
                    case '2': palabraDescifrada += 'e'; break;
                    case '3': palabraDescifrada += 'i'; break;
                    case '4': palabraDescifrada += 'o'; break;
                    case '5': palabraDescifrada += 'u'; break;
                    case '_': palabraDescifrada += ' '; break;
                    default: palabraDescifrada += c; break;
                }
            }
            cout<<"Palabra descifrada: "<<palabraDescifrada<<endl;
            system("PAUSE");
        } 
        else if(opcion != 3){
            cout<<"Opcion invalida. Intenta de nuevo."<<endl;
        }
    } while (opcion!=3);
    
    cout<<"===== Gracias por jugar =====";
    
    return 0;
}

