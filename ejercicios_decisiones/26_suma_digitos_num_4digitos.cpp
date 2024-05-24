#include "iostream"
#include <sysinfoapi.h>

using namespace std;

double time1, timedif;        /* use doubles to show small values */

int main(){

    // Start measuring time
    long long int begin = GetTickCount64();



    cout << "\nEjercicio 26. Leer un numero entero de cuatro digitos y determinar a cuanto es igual la suma de sus digitos.\n";
    cout << "\n################\n";

    int numero;
    int digito1, digito2, digito3, digito4;
    int sumaDigitos;

    cout << "Digite un numero entero de cuatro digitos: ";
    cin >> numero;

    (numero < 0) ? numero = -numero : numero;

    if (numero >= 1000 && numero <= 9999){

        digito1 = numero / 1000;
        digito2 = (numero / 100) % 10;
        digito3 = (numero % 100) / 10;
        digito4 = numero % 10;

        sumaDigitos = digito1 + digito2 + digito3 + digito4;

        cout << "Sus digitos son "<< digito1 << " " << digito2 << " " << digito3 << " " << digito4 << endl;
        cout << "La suma de sus digitos es: " << sumaDigitos << endl;
        


    }else{

        cout << "Digite un numero de cuatro digitos\n";
    }

    // Stop measuring time and calculate the elapsed time
    long long int end = GetTickCount64();
    double elapsed = (end - begin)*1e-3;
    

    printf("Time measured: %.3f seconds.\n", elapsed);

    return 0;
}