
	//Juan Pablo Soriano González 24041242

#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
    char palabra[100],palabraCifrada[100],palabraDescifrada[100]; 
    int opcion,longitud; 

        cout<<"Introduce la palabra a cifrar: ";
        cin>>palabra;
        
        longitud=0;
        while(palabra[longitud]!='\0')longitud++;
        
        for(int i=0;i<longitud;i++){
            if(palabra[i] == ' '){ 
                palabraCifrada[i] = '_';
            }
            else{
                switch (palabra[i]){
                    case'A':palabraCifrada[i]='F';break;
                    case'C':palabraCifrada[i]='O';break;
                    case'E':palabraCifrada[i]='M';break;
                    case'F':palabraCifrada[i]='A';break;
                    case'I':palabraCifrada[i]='L';break;
                    case'L':palabraCifrada[i]='I';break;
                    case'M':palabraCifrada[i]='E';break;
                    case'O':palabraCifrada[i]='C';break;
                    case'S':palabraCifrada[i]='U';break;
                    case'U':palabraCifrada[i]='S';break;
                        
                    case'a':palabraCifrada[i]='f';break;
                    case'c':palabraCifrada[i]='o';break;
                    case'e':palabraCifrada[i]='m';break;
                    case'f':palabraCifrada[i]='a';break;
                    case'i':palabraCifrada[i]='l';break;
                    case'l':palabraCifrada[i]='i';break;
                    case'm':palabraCifrada[i]='e';break;
                    case'o':palabraCifrada[i]='c';break;
                    case's':palabraCifrada[i]='u';break;
                    case'u':palabraCifrada[i]='s';break;
                    case' ':palabraCifrada[i]='_'; break;
                    default:palabraCifrada[i]=palabra[i]; 
                        
                    }
                }
            }
            palabraCifrada[longitud]='\0'; 
            cout<<"Palabra cifrada:"<<palabraCifrada<<"\n";
        
    return 0;
}
