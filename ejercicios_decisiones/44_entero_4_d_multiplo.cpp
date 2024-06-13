#include "iostream"

using namespace std;

int main(){


    cout << "\nEjercicio 44. Leer un numero entero de 4 digitos y determinar si el primer digito es multiplo de alguno de los otros digitos." << endl;

    cout << "\n##################\n" << endl;

    int numero;
    int digito1,digito2,digito3,digito4;

    cout << "Digite un numero entero de 4 digitos: ";
    cin >> numero;

    if (numero < 0){
        numero = -numero;
    }

    digito1 = (numero / 1000) % 100;
    digito2 = (numero / 100) % 10;
    digito3 = (numero / 10 ) % 10;
    digito4 = numero % 10;

    if (numero >= 1000 && numero <= 9999){

        //Como se tiene que comprobar que el primero digito al dividirlo por el segun sea igual a cero para saber si es multiplo de ese numero
        //Se tiene que comprobar primero que los digitos no sean 0 porque una division por cero es un error.
        if (digito2 != 0 && digito1 % digito2 == 0) {
            cout << "El primer digito es multiplo del segundo digito." << endl;
        }else if (digito3 != 0 && digito1 % digito3 == 0) {
            cout << "El primer digito es multiplo del tercer digito." << endl;
        }else if (digito4 != 0 && digito1 % digito4 == 0) {
            cout << "El primer digito es multiplo del cuarto digito." << endl;
        }else{
            cout << "El primer digito no es multiplo de ninguno de los otros digitos." << endl;
        }
        
    }else{
        cout << "Solo se permiten numeros de 4 digitos." << endl;
    }

    return 0;
}