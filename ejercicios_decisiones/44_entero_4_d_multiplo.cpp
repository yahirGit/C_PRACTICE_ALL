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
    
    if(numero >= 1000 && numero <= 9999){
        cout << "El numero es de 4 digitos" << endl;
    }else{
        cout << "El numero tiene que ser de 4 digitos." << endl;
    }

    return 0;
}