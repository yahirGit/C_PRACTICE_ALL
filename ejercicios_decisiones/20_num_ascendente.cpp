#include "iostream"

//En c++ permite acceder directamente a las funciones sin usar std:: 
using namespace std;

int main(){

    cout << "\nPrograma num 20. Leer tres numeros enteros y mostrarlos ascendentemente.\n";
    cout << "\n============\n";

    int numero1, numero2, numero3;

    cout << "Digite el numero entero uno: ";
    cin >> numero1;

    cout << "Digite el numero entero dos: ";
    cin >> numero2;

    cout << "Digite el numero entero tres: ";
    cin >> numero3;

    if(numero1 <= numero2 && numero1 <= numero3){ // comprobamos si el primero numero es el menor de todos

        // Como sabemos que si cumple la decision anterior el numero1 es menor pues quedan dos posiciones por ocupar
        //Entonces si numero2 <= numero3 tenemos que el orden seria 1,2,3
        if (numero2 <= numero3){ 
            
            cout << "El orden ascendente seria: " << numero1 << " " << numero2 << " " << numero3;
        }
        //Pero en caso contrario donde el 2 sea mayor que tres pues el orden cambiara ria a 1 3 2
        if (numero2 > numero3){
            cout << "El orden ascendente seria: " << numero1 << " " << numero3 << " " << numero2;
        }
    }

    if(numero2 <= numero1 && numero2 <= numero3){

        if (numero1 <= numero3){
            cout << "El orden ascendente seria: " << numero2 << " " << numero1 << " " << numero3;
        }
        if (numero1 > numero3){
            cout << "El orden ascendente seria: " << numero2 << " " << numero3 << " " << numero1;
        }
    }

    if(numero3 <= numero1 && numero3 <= numero2){

        if (numero1 <= numero2){
            cout << "El orden ascendente seria: " << numero3 << " " << numero1 << " " << numero2;
        }
        if (numero1 > numero2){
            cout << "El orden ascendente seria: " << numero3 << " " << numero2 << " " << numero1;
        }
    }


    return 0;
}