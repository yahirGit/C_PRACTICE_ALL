#include "iostream"

using namespace std;

int main(){

    cout << "\nEjercicio 29. Leer un numero entero de cinco digitos y determinar si es un numero capicua.\n";
    cout << "\n################\n";

    int numero;
    int digito1, digito2, digito3, digito4,digito5;

    cout << "Digite un numero entero de 5 digitos: ";
    cin >> numero;

    //Cambiamos el if simple a operador ternario para ahorrar lineas de codigo.
    numero < 0 ? numero = -numero: numero;

    if (numero >= 10000 && numero <= 99999){

        digito1 = (numero / 10000);
        digito2 = (numero / 1000) % 100 % 10;
        digito3 = (numero / 100) % 10;
        digito4 = (numero % 100) / 10;
        digito5 = numero % 10;

        if(digito1 == digito5 && digito2 == digito4){
            cout << "El numero es capicua !! " << endl;
        }else{
            cout << "Intenta con otro numero !! " << endl;
        }

        cout << "Sus digitos son "<< digito1 << " " << digito2 << " " << digito3 << " " << digito4 << " "<< digito5 << endl;

    }else{
        cout << "Digite un numero de 5 cifras" << endl;
    }
    
    return 0;
}