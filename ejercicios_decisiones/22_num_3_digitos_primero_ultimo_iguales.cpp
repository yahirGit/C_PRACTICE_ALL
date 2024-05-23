#include "iostream"

using namespace std;

int main(){


    cout << "\nEjercicio 22. Leer un numero entero de tres digitos y determinar si el primer digito es igual al ultimo digito.\n";
    cout << "\n################\n";

    int numero;
    int digito1, digito2, digito3;

    cout << "Digite un numero entero de tres digitos: ";
    cin >> numero;

    (numero < 0) ? numero = -numero : numero;

    if (numero >= 100 && numero <= 999){

        digito1 = numero / 100;
        digito2 = (numero % 100) / 10;
        digito3 = numero % 10;

        if (digito1 == digito3){
            cout << "Los digitos del numero: "<< numero << " primero: " << digito1 << " ultimo: " << digito3 << " Son iguales" << endl;
        }else{
            cout << "Los digitos del numero: "<< numero << " primero: " << digito1 << " ultimo: " << digito3 << " No son iguales" << endl;
        }
        
       
    }else{

        cout << "Digite un numero de tres digitos";
    }

    return 0;
}