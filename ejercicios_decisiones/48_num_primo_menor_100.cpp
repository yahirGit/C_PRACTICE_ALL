#include "iostream"

using namespace std;


int main (){

    cout << "\nEjercicio 48. Leer un numero entero y, si es menor que 100, determinar si es primo." << endl;

    cout << "\n##################\n" << endl;

    int numero;

    cout << "Digite un numero entero: ";
    cin >> numero;

    (numero < 0) ? numero = -numero: numero;

    if(numero < 100){
        if (numero == 2 || numero == 3 || numero == 5 || numero == 7 || numero == 11 || numero == 13 || numero == 17 || numero == 19 || numero == 23 || numero == 29 || numero == 31 || numero == 37 || numero == 41 || numero == 43 || numero == 47 || numero == 53 || numero == 59 || numero == 61 || numero == 67 || numero == 71 || numero == 73 || numero == 79 || numero == 83 || numero == 89 || numero == 97){
            
            cout << "El numero que digito: " << numero <<" es primo menor que 100." << endl;
            
            }
    }else{
        cout << "El numero que digito: " << numero <<" no es primo menor que 100." << endl;
    }


    return 0;
}