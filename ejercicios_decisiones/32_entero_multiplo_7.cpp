#include "iostream"

using namespace std;

int main(){

    cout << "\nEjercicio 32. Leer un numero entero y determinar si es multiplo de 7.\n";
    cout << "\n################\n";

    int numero;

    cout << "\nDigite un numero entero: ";
    cin >> numero;

    if (numero < 0){
        numero = -numero;
    }
    if (numero % 7 == 0){
        cout << "\nEl numero que digito " << numero <<" " << "es multiplo de 7" << endl;
    }else{
        cout << "\nEl numero que digito " << numero <<" " << "NO es multiplo de 7" << endl;
        return 1;
    }

    return 0;
}