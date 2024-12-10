
	//Juan Pablo Soriano González 24041242
		
//comparación de cadenas
#include <iostream> //#include<stdio.h>
#include <windows.h>
#include <string>
#include <conio.h>
using namespace std;
int main( )
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	char cad1[100],cad2[100];
	string pal1, pal2;
	int fin1,fin2,diferentes,i=-1;
	fin1=1;
	fin2=1;
	
	cout<<"Dame una cadena : ";
	cin>>pal1;
	cout<<"Dame otra cadena : ";
	cin>>pal2;
	
	if(pal1==pal2){
		cout<<"Son iguales\n";
	}
	else{
		cout<<"Son diferentes\n";
	}
	
	system("PAUSE");
	system("CLS");
	
	//cadena1 (letra por letra) //por ejemplo para un password sirve
	cout<<"Dame una cadena y termina con enter: ";
	i=-1;
	do{
		i++;
		fflush(stdin);
		cad1[i]=getche();
	}
	while(cad1[i]!='\r');
	cad1[i]='\0';
	fin1=i;
	
	//cadena2 (con gets)
	cout<<"\n\nDame otra cadena y termina con enter: ";
	gets(cad2);
	fin2=strlen(cad2);
	
	if(fin1!=fin2){ //Si las longitudes son diferentes
		cout<<"\n\n\n\nLas cadenas son diferentes";
	}else{
		diferentes=0;
		for(i=0;cad1[i]!='\0';i++){
			if(cad1[i]!=cad2[i]){
				diferentes=1;
				break;
			}
		}
		if(diferentes==1){
			cout<<"\n\n\n\nLas cadenas son diferentes\n";
		}else{
			cout<<"\n\n\n\nLas cadenas son iguales\n";
		}
	}
	
	return 0;
	
}