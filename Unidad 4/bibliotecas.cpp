
	//Juan Pablo Soriano Gonzalez 24041242


// Lista de Bibliotecas Comunes en C++ con Funciones Explicadas

// 1. <iostream>: Biblioteca para entrada y salida de datos
#include<iostream>
/*
- std::cin: Entrada estándar (usualmente el teclado).
- std::cout: Salida estándar (usualmente la pantalla).
- std::cerr: Salida de error estándar.
*/

using namespace std;

int main() {
    int a, b;
    cout << "Ingresa dos números: ";
    cin >> a >> b;
    cout << "La suma es: " << a + b << endl;

    return 0;
}

// 2. <iomanip>: Manipuladores de flujo para formatear la salida
#include<iomanip>
/*
- std::setprecision(): Establece la precisión de los números de punto flotante.
- std::setw(): Establece el ancho de campo.
- std::fixed: Formatea números de punto flotante con notación fija.
*/

// 3. <string>: Manipulación de cadenas de texto
#include<string>
/*
- std::string: Tipo de dato que almacena cadenas de caracteres.
- length(): Devuelve la longitud de la cadena.
- substr(): Extrae una subcadena.
- find(): Encuentra una subcadena dentro de otra cadena.
*/

// 4. <cmath>: Funciones matemáticas estándar
#include<cmath>
/*
- std::sqrt(x): Devuelve la raíz cuadrada de x.
- std::pow(x, y): Eleva x a la potencia de y.
- std::abs(x): Devuelve el valor absoluto de x.
*/

// 5. <vector>: Biblioteca para trabajar con arreglos dinámicos
#include<vector>
/*
- std::vector: Tipo de dato que representa un arreglo dinámico.
- push_back(): Añade un elemento al final del vector.
- size(): Devuelve el número de elementos en el vector.
- clear(): Elimina todos los elementos del vector.
*/

// 6. <algorithm>: Algoritmos estándar
#include<algorithm>
/*
- std::sort(): Ordena los elementos de un contenedor.
- std::find(): Busca un elemento en un rango.
- std::reverse(): Invierte el orden de los elementos en un rango.
*/

// 7. <map>: Biblioteca para trabajar con mapas (asociaciones clave-valor)
#include<map>
/*
- std::map: Contenedor que almacena pares clave-valor.
- insert(): Inserta un nuevo elemento.
- find(): Busca un elemento por su clave.
- size(): Devuelve el número de elementos en el mapa.
*/

// 8. <set>: Biblioteca para trabajar con conjuntos de elementos únicos
#include<set>
/*
- std::set: Contenedor que almacena valores únicos.
- insert(): Inserta un elemento.
- find(): Busca un elemento en el conjunto.
- erase(): Elimina un elemento del conjunto.
*/

// 9. <queue>: Biblioteca para trabajar con colas (FIFO)
#include<queue>
/*
- std::queue: Tipo de dato que representa una cola.
- push(): Añade un elemento al final.
- pop(): Elimina el primer elemento.
- front(): Devuelve el primer elemento.
- size(): Devuelve el tamaño de la cola.
*/

// 10. <fstream>: Biblioteca para manejo de archivos
#include<fstream>
/*
- std::ifstream: Entrada de datos desde un archivo.
- std::ofstream: Salida de datos a un archivo.
- open(): Abre un archivo.
- close(): Cierra un archivo.
- is_open(): Verifica si un archivo está abierto.
*/
// 11. <stack>: Biblioteca para trabajar con pilas (LIFO)
#include<stack>
/*
- std::stack: Tipo de dato que representa una pila.
- push(): Añade un elemento al tope de la pila.
- pop(): Elimina el elemento en el tope.
- top(): Devuelve el elemento en el tope de la pila.
- size(): Devuelve el tamaño de la pila.
*/

// 12. <deque>: Biblioteca para trabajar con colas dobles (inserción/eliminación en ambos extremos)
#include<deque>
/*
- std::deque: Tipo de dato que representa una cola doble.
- push_back(): Añade un elemento al final.
- push_front(): Añade un elemento al frente.
- pop_back(): Elimina el último elemento.
- pop_front(): Elimina el primer elemento.
- front(): Devuelve el primer elemento.
- back(): Devuelve el último elemento.
*/

// 13. <list>: Biblioteca para listas enlazadas (doble)
#include<list>
/*
- std::list: Lista enlazada doble.
- push_back(): Añade un elemento al final.
- push_front(): Añade un elemento al principio.
- pop_back(): Elimina el último elemento.
- pop_front(): Elimina el primer elemento.
- sort(): Ordena los elementos de la lista.
*/

// 14. <bitset>: Biblioteca para trabajar con conjuntos de bits
#include<bitset>
/*
- std::bitset: Contenedor de bits que permite trabajar con conjuntos de bits.
- set(): Establece el valor de un bit (1).
- reset(): Restablece el valor de un bit (0).
- flip(): Invierte los bits.
- count(): Cuenta el número de bits establecidos en 1.
*/

// 15. <random>: Biblioteca para generar números aleatorios
#include<random>
/*
- std::default_random_engine: Generador de números aleatorios.
- std::uniform_int_distribution(): Distribución uniforme para enteros.
- std::uniform_real_distribution(): Distribución uniforme para reales.
*/

// 16. <ctime>: Biblioteca para manejo de tiempo y fecha
#include<ctime>
/*
- std::time(): Devuelve el tiempo actual como número de segundos desde 1970.
- std::localtime(): Convierte el tiempo a una estructura de tiempo local.
- std::difftime(): Calcula la diferencia entre dos tiempos.
*/

// 17. <cstdlib>: Funciones generales
#include<cstdlib>
/*
- std::rand(): Genera un número aleatorio.
- std::srand(): Inicializa la semilla para la generación de números aleatorios.
- std::exit(): Termina el programa.
*/

// 18. <numeric>: Biblioteca para operaciones numéricas en rangos
#include<numeric>
/*
- std::accumulate(): Suma los valores en un rango.
- std::inner_product(): Producto escalar de dos rangos.
- std::adjacent_difference(): Calcula la diferencia entre valores adyacentes en un rango.
*/

// 19. <thread>: Biblioteca para manejo de hilos
#include<thread>
/*
- std::thread: Crea y maneja un hilo de ejecución.
- join(): Espera a que el hilo termine.
- detach(): Separa el hilo del hilo principal.
- std::this_thread::sleep_for(): Hace que el hilo actual duerma por un tiempo específico.
*/

// 20. <regex>: Biblioteca para expresiones regulares
#include<regex>
/*
- std::regex: Objeto que representa una expresión regular.
- std::regex_match(): Verifica si una cadena coincide con una expresión regular.
- std::regex_search(): Busca una coincidencia en una cadena.
- std::regex_replace(): Reemplaza partes de una cadena basadas en una expresión regular.
*/


