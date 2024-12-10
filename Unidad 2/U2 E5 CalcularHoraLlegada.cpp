
	//Juan Pablo Soriano Gonz�lez 24041242
	
#include <math.h>  // Incluimos la biblioteca para poder usar funciones matemáticas, como trunc(), que se usa más adelante.
#include <iostream> // Esta biblioteca se utiliza para la entrada y salida de datos (cout y cin).
#include <windows.h> // Incluimos esta biblioteca para poder usar funciones del sistema operativo Windows, en este caso, para manejar el formato de texto en la consola.
using namespace std; // Evita la necesidad de escribir 'std::' antes de cin, cout, etc. Simplifica la escritura del código.

main() 
{
    SetConsoleOutputCP(CP_UTF8); // Esta función permite que la consola pueda mostrar correctamente caracteres especiales (como tildes o ñ) en formato UTF-8.
    SetConsoleCP(CP_UTF8); // Esta función establece la entrada de la consola también en formato UTF-8, para que se puedan introducir caracteres especiales correctamente.

    // Declaración de variables enteras
    int horasalida, minsalida, segsalida, seginicial, segfinal;
    int segviaje, horallegada, minllegada, segllegada;

    // Aquí pedimos al usuario que ingrese la hora de salida
    cout<<"Dime las horas de salida: ";
    cin>>horasalida; // Guardamos la hora en la variable horasalida

    // Pedimos los minutos de salida
    cout<<"Dime los minutos de salida: ";
    cin>>minsalida; // Guardamos los minutos en minsalida

    // Pedimos los segundos de salida
    cout<<"Dime los segundos de salida: ";
    cin>>segsalida; // Guardamos los segundos en segsalida

    // Pedimos al usuario que ingrese el tiempo de viaje en segundos
    cout<<"Dime el tiempo que dura el viaje (en segundos): ";
    cin>>segviaje; // Guardamos el tiempo del viaje en la variable segviaje

    // Convertimos la hora de salida a segundos totales desde medianoche
    seginicial = horasalida * 3600 + minsalida * 60 + segsalida; 
    // Multiplicamos las horas por 3600 (número de segundos en una hora) y los minutos por 60 (número de segundos en un minuto). Luego sumamos los segundos.

    // Calculamos el tiempo final en segundos, sumando el tiempo de viaje
    segfinal = seginicial + segviaje; // El tiempo total final en segundos desde medianoche

    // Calculamos la hora de llegada en horas enteras truncando la división
    horallegada = trunc(segfinal / 3600); 
    // Dividimos los segundos totales por 3600 para convertirlos en horas y truncamos (ignoramos la parte decimal).

    // Calculamos los minutos restantes después de las horas
    minllegada = trunc((segfinal % 3600) / 60); 
    // Usamos el operador % (módulo) para obtener el resto de la división por 3600, es decir, los segundos que no formaban parte de las horas completas. Luego, dividimos esos segundos por 60 para obtener los minutos.

    // Calculamos los segundos restantes después de las horas y minutos
    segllegada = (segfinal % 3600) % 60; 
    // Usamos nuevamente el operador % para obtener los segundos restantes después de calcular las horas y minutos.

    // Mostramos la hora de llegada calculada
    cout<<"Hora de llegada: ";
    cout<<horallegada<<":"<<minllegada<<":"<<segllegada<<"\n"; // Imprimimos la hora, minutos y segundos de llegada.

    // Usamos printf para formatear la salida, asegurándonos de que siempre se muestren dos dígitos para las horas, minutos y segundos (por ejemplo, 08:09:05).
    printf("Hora de llegada: %02d:%02d:%02d", horallegada, minllegada, segllegada);
}
