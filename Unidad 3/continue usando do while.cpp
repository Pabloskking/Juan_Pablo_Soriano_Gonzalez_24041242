
	//Juan Pablo Soriano Gonz�lez 24041242

#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x,y=1;
	cout<<"Lectura de 5 números enteros usando do while\n";
	do{
		cout<<"Dame un número que no sea 0 (intento #"<<y<<")\n";
		cin>>x;
		if(x==0){
			continue;	
		}
		y++;
	}while(y<6);
	system("PAUSE");
	/*en ciclos do while con contador un continue  */
	system("CLS");
	cout<<"Lectura de 5 números enteros usando un for estandar\n";
	for(y=1;y<6;y++){
		cout<<"Dame un número que no sea 0 (intento #"<<y<<")\n";
		cin>>x;
		if(x==0){
			continue;
		}
		cout<<"Por aquí pasa solo cuando el número es diferente de 0\n";
		//y++; para que se comporte como el do o el while
	}
	
	return 0;	
}
		
