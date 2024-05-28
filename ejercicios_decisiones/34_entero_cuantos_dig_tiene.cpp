#include "iostream"

using namespace std;

int main(){

    cout << "\nEjercicio 34. Leer un numero entero menor que 1000 y determinar cuantos digitos tiene.\n";
    cout << "\n################\n";

    int numero;

    cout << "\nDigite un numero entero: ";
    cin >> numero;

    if (numero < 0){
        numero = -numero;
    }

    if (numero >=0 && numero <=9){
        cout << "\nEl numero que digito " << numero <<" " << "tiene un digito" << endl;
    }else if(numero >=10 && numero <=99){
        cout << "\nEl numero que digito " << numero <<" " << "tiene dos digitos" << endl;
    }else if(numero >=100 && numero <1000){
        cout << "\nEl numero que digito " << numero <<" " << "tiene tres digitos" << endl;
    }else{
        cout << "\nEl numero que digito " << numero <<" " << "tiene mas de tres digitos" << endl;
    }
    
    return 0;
}