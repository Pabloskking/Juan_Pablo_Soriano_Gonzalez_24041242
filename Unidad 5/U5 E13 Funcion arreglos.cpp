
	//Juan Pablo Soriano Gonz·lez #24041242

#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;
// FunciÛn que modifica el arreglo de tipo char
void modificarArregloChar(char (&arregloChar)[5]);
// Funci√Ûn que modifica el arreglo de tipo int
void modificarArregloInt(int (&arregloInt)[5]); 

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	char arregloChar[]="Hola";
    int arregloInt[]={1,2,3,4,5};
    cout<<"Arreglo char original: "<<arregloChar<<'\n';
    cout<<"Arreglo int original: ";
    for(int i=0;i<5;i++)
	    cout<<arregloInt[i]<<" ";
    cout<<'\n';
    modificarArregloChar(arregloChar);
    modificarArregloInt(arregloInt);
    cout<<"Arreglo char modificado: "<<arregloChar<<'\n';
    cout<<"Arreglo int modificado: ";
    for(int i=0;i<5;i++) 
        cout<<arregloInt[i]<<" ";
    cout<<'\n';

    return 0;

}

//Clases
void modificarArregloChar(char (&arregloChar)[5]){
    for(int i=0;i<5;i++) 
	    arregloChar[i]='X';
}

void modificarArregloInt(int (&arregloInt)[5]) {
    for(int i=0;i<5;i++)
        arregloInt[i]*=2;
}
	
