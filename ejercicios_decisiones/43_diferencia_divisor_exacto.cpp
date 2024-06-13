#include "iostream"

using namespace std;

int main(){


    cout << "\nEjercicio 43. Leer dos numeros enteros y determinar si la diferencia entre los dos es un numero divisor exacto de alguno de los dos numeros." << endl;
    cout << "\n##################\n" << endl;

    int numero1,numero2;
    int resta;

    cout << "Digite un numero entero 1: ";
    cin >> numero1;

    cout << "Digite un numero entero 2: ";
    cin >> numero2;

    resta = numero1 - numero2;

    (resta < 0) ? resta = -resta : resta;

    if (resta != 0){
        if (numero1 % resta == 0){
            cout << "La diferencia entre los dos numeros es un divisor exacto de numero1: " << numero1 << endl;
        }
        else if (numero2 % resta == 0){
            cout << "La diferencia entre los dos numeros es un divisor exacto de numero2: " << numero2 << endl;
        }
        else{
            cout << "La diferencia entre los dos numeros No es un divisor exacto de ningun numero." << endl;
        }
    }else{
        cout << "La diferencia entre los dos numeros No es un divisor exacto de ningun numero." << endl;
    }

    return 0;
}