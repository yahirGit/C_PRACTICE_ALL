#include "iostream"
#include <sysinfoapi.h>

using namespace std;

double time1, timedif;        /* use doubles to show small values */

int main(){

    // Start measuring time
    long long int begin = GetTickCount64();



    cout << "\nEjercicio 25. Leer un numero entero de tres digitos y determinar si alguno de sus digitos es igual a la suma de los otros dos.\n";
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
        }else{
            cout << "La Suma de los digitos no es igual a alguno de sus digitos.";
        }

    }else{

        cout << "Digite un numero de tres digitos";
    }

    // Stop measuring time and calculate the elapsed time
    long long int end = GetTickCount64();
    double elapsed = (end - begin)*1e-3;
    

    printf("Time measured: %.3f seconds.\n", elapsed);

    return 0;
}