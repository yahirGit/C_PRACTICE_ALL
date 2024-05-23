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

        if(digito1 % 2 ==0){
            contar_pares++;
        }
        if(digito2 % 2 ==0){
            contar_pares++;
        }
        if(digito3 % 2 ==0){
            contar_pares++;
        }

        cout << "El numero: " << numero << ". " << "tiene estos numeros pares: " << contar_pares << endl;
       
    }else{

        cout << "Digite un numero de tres digitos";
    }

    return 0;
}