#include "iostream"

using namespace std;

int main(){


    cout << "\nEjercicio 45. Leer un numero entero de 2 digitos y, si es par, mostrar en pantalla la suma de sus digitos; si es primo y menor que 10, mostrar en pantalla su ultimo digito y, si es multiplo de 5 y menor que 30, mostrar en pantalla el primer digito." << endl;

    cout << "\n##################\n" << endl;

    int numero;
    int digito1,digito2;

    cout << "Digite un numero entero de 2 digitos: ";
    cin >> numero;

    if (numero < 0){
        numero = -numero;
    }

    if (numero < 10 || numero > 99){
        cout << "El numero ingresado no es de dos digitos"<< endl;
        return 1;
    }

    digito1 = (numero / 10 );
    digito2 = numero % 10;

    if (numero % 2 == 0){
        cout << "El numero es par. " << "La suma de sus digitos es: " << digito1+digito2 << endl;
    }
    if(numero < 10 && numero == 2 || numero == 3 || numero == 5 || numero == 7){
        cout << "El numero es primo menor que 10." << " Su ultimo digito es: " << digito2 << endl;
    }
    if(numero % 5 == 0 && numero < 30){
        cout << "El numero es multiplo de 5 menor que 30." << " Su primer digito es: " << digito1 << endl;
    }
    
    return 0;
}