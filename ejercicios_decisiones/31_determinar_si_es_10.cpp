#include "iostream"

using namespace std;

int main(){

    cout << "\nEjercicio 31. Leer un numero entero y determinar si es igual a 10.\n";
    cout << "\n################\n";

    int numero;

    cout << "\nDigite un numero entero: ";
    cin >> numero;

    if (numero < 0){
        numero = -numero;
    }
    if (numero == 10){
        cout << "\nEl numero es exactamente 10";
    }else{
        cout << "\nEl numero es diferente de 10";
        return 1;
    }

    return 0;
}