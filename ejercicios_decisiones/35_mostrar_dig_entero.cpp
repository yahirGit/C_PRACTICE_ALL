#include "iostream"

using namespace std;

int main(){

    cout << "\nEjercicio 35. Leer un numero entero de dos digitos, guardar cada digito en una variable y luego mostrarlas en pantalla.\n";
    cout << "\n################\n";

    int numero;
    int digito1,digito2;

    cout << "\nDigite un numero entero: ";
    cin >> numero;


    if (numero < 0){
        numero = -numero;
    }
    if (numero >= 10 && numero <= 99){
        digito1 = numero / 10;
        digito2 = numero % 10;


        cout << "Los digitos del numero: "<< numero << " digito1: " << digito1 << " digito2: " << digito2 << endl;

    }else{
        cout << "\n Solo se permiten numeros de dos digitos" << endl;
    }

    return 0;
}