
	//Juan Pablo Soriano González 24041242
		
//Lee cadena y que el primer arreglo lo lea al revés y lo imprima
#include <iostream> //#include<stdio.h>
#include <windows.h>
#include <string>
#include <conio.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	int i,j,limite;
	char cad1[100], cad2[100];
	
	cout<<"Dame una cadena: "
	gets(cad1);
	limite=strlen(cad1);
	j=limite-1;
	for(i=0;i<limite;i++){
		cad2[i]=cad1[j];
		j--;
	}
	cad2	
	
	return 0;
	
}