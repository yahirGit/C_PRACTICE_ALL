#include "iostream"

using namespace std;

int main(){


    cout << "\nEjercicio 23. Leer un numero entero de tres digitos y determinar cuantos digitos primos tiene.\n";
    cout << "\n################\n";

    int numero;
    int digito1, digito2, digito3;
    int contar_primos = 0;

    cout << "Digite un numero entero de tres digitos: ";
    cin >> numero;

    (numero < 0) ? numero = -numero : numero;

    if (numero >= 100 && numero <= 999){

        digito1 = numero / 100;
        digito2 = (numero % 100) / 10;
        digito3 = numero % 10;

        if ((digito1 == 2 || digito1 == 3 || digito1 == 5 || digito1 == 7)){
            contar_primos ++;
        }
        if ((digito2 == 2 || digito2 == 3 || digito2 == 5 || digito2 == 7)){
            contar_primos ++;
        }
        if ((digito3 == 2 || digito3 == 3 || digito3 == 5 || digito3 == 7)){
            contar_primos ++;
        }

        cout << "El numero: " << numero << ". " << "tiene estos numeros primos: " << contar_primos << endl;
       
    }else{

        cout << "Digite un numero de tres digitos";
    }

    return 0;
}