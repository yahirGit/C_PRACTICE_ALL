#include "iostream"

using namespace std;

int main(){


    cout << "\nEjercicio 24. Leer un número entero de tres digitos y determinar cuantos digitos pares tiene..\n";
    cout << "\n################\n";

    int numero;
    int digito1, digito2, digito3;
    int contar_pares = 0;

    cout << "Digite un numero entero de tres digitos: ";
    cin >> numero;

    (numero < 0) ? numero = -numero : numero;

    if (numero >= 100 && numero <= 999){

        digito1 = numero / 100;
        digito2 = (numero % 100) / 10;
        digito3 = numero % 10;

        if((digito1 + digito2) == digito3){
            cout << "La suma del digito uno: " << digito1 << " + " << "digito 2: " << digito2 << " Es igual a digito 3: "<< digito3 <<endl;
        }else if((digito1 +  digito3) == digito2){
            cout << "La suma del digito uno: " << digito1 << " + " << "digito 3: " << digito3 << " Es igual a digito 2: "<< digito2 <<endl;
        }else if((digito2 +  digito1) == digito3){
            cout << "La suma del digito dos: " << digito2 << " + " << "digito 1: " << digito1 << " Es igual a digito 3: "<< digito3 <<endl;
        }else if((digito2 +  digito3) == digito1){
            cout << "La suma del digito dos: " << digito2 << " + " << "digito 3: " << digito3 << " Es igual a digito 1: "<< digito1 <<endl;
        }else if((digito3 +  digito1) == digito2){
            cout << "La suma del digito tres: " << digito3 << " + " << "digito 1: " << digito1 << " Es igual a digito 2: "<< digito2 <<endl;
        }else if((digito3 +  digito2) == digito1){
            cout << "La suma del digito tres: " << digito3 << " + " << "digito 2: " << digito2 << " Es igual a digito 1: "<< digito1 <<endl;
        }

    }else{

        cout << "Digite un numero de tres digitos";
    }

    return 0;
}