#include "iostream"

using namespace std;

int main(){

    cout << "\nEjercicio 33. Leer un numero entero y determinar si termina en 7.\n";
    cout << "\n################\n";

    int numero;
    int ultimoDigito;

    cout << "\nDigite un numero entero: ";
    cin >> numero;

    if (numero < 0){
        numero = -numero;
    }
    ultimoDigito = numero % 10;

    if (ultimoDigito == 7){
        cout << "\nEl numero que digito " << numero <<" " << "su ultimo digito es 7" << endl;
    }else{
        cout << "\nEl numero que digito " << numero <<" " << "su ultimo digito NO es 7." << endl;
        return 1;
    }

    return 0;
}