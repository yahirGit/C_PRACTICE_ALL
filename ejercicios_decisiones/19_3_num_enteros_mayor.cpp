#include "iostream"

//En c++ permite acceder directamente a las funciones sin usar std:: 
using namespace std;

int main(){

    cout << "\nPrograma num 19. Leer tres numeros enteros y determinar cual es el mayor. Usar solamente dos variables.\n";
    cout << "\n============\n";

    int numero, numMayor;


    cout << "Digite el numero entero uno: ";
    cin >> numero;
    numMayor = numero; //Guardamos el primer numero

    cout << "Digite el segundo numero: ";
    cin >> numero; // Comparamos el segundo numero con el primero que ya se guardo en numMayor

    if (numero > numMayor){  //Si el primer numero es mayor que el segundo lo guardamos en numMayor
        numMayor = numero;
    }

    cout << "Digite el tercer numero: "; //Leemos el tercer numero
    cin >> numero;

    if (numero > numMayor){ // Si el tercer numero es mayor que el segundo entonces los guardamos en numMayor porque? 
        numMayor = numero; // porque estamos reemplazando el valor de la variable numero y numMayor
    }

    //Esto establece que cada vez que digitamos un nuevo numero este se tiene que comparar y almacenar en la varaible
    // numMayor muy parecido al funcionamiento de un contador.

     cout << "El numero mayor es : " << numMayor;
    

    return 0;
}