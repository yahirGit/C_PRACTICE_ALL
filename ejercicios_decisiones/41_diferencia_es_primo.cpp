#include "iostream"

using namespace std;

int main(){

    cout << "\nEjercicio 41. Leer dos numeros enteros y determinar si la diferencia entre los dos es un numero primo.\n";
    cout << "\n################\n";

    int numero1, numero2;
    int resta, restaPositiva;

    cout << "\nDigite un numero entero uno: ";
    cin >> numero1;

    cout << "\nDigite un numero entero dos: ";
    cin >> numero2;

    resta = numero1 - numero2;

    (resta < 0 ) ? resta = -resta : resta = resta; 

    cout << "resta = " << resta << endl;

    //Variable para comprobar que el numero es primo
    bool esPrimo;

    if(resta < 2){
        esPrimo = false;
    }else if(resta == 2 || resta == 3 || resta == 5 || resta == 7 || resta == 9 || resta == 11 || resta == 13){
        esPrimo = true;
    }else if(resta % 2 == 0){
        esPrimo = false;
    }else if(resta % 3 == 0){
        esPrimo = false;
    }else if(resta % 5 == 0){
        esPrimo = false;
    }else if (resta % 7 == 0){
        esPrimo = false;
    }else{
        esPrimo = true;
        if (resta % 11 == 0) esPrimo = false;
        if (resta % 13 == 0) esPrimo = false;
        if (resta % 17 == 0) esPrimo = false;
        if (resta % 19 == 0) esPrimo = false;
        if (resta % 23 == 0) esPrimo = false;
        if (resta % 29 == 0) esPrimo = false;
        if (resta % 31 == 0) esPrimo = false;
    }

    if(esPrimo){
        cout << "La diferencia entro los numeros ES un primo." << endl;
    }else{
        cout << "La diferencia entro los numeros NO un primo." << endl;

    }
    
    return 0;
}