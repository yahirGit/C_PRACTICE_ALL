#include "iostream"

using namespace std;

int main(){

    cout << "\nEjercicio 30. Leer un numero entero de cuatro digitos y determinar si el segundo digito es igual al penultimo.\n";
    cout << "\n################\n";

    int numero;
    int digito1, digito2, digito3, digito4;

    cout << "Digite un numero entero de 4 digitos: ";
    cin >> numero;

    //Cambiamos el if simple a operador ternario para ahorrar lineas de codigo.
    numero < 0 ? numero = -numero: numero;

    if (numero >= 1000 && numero <= 9999){

        digito1 = (numero / 1000);
        digito2 = (numero / 100) % 10;
        digito3 = (numero % 100) / 10;
        digito4 = numero % 10;

        if (digito2 == digito3){
            cout << "El segundo digito : " << digito2 << " es igual al penultimo digito: " << digito3 << endl;
        }else{
            cout << "El segundo digito : " << digito2 << " NO igual al penultimo digito: " << digito3 << endl;

        }
        

        cout << "Sus digitos son "<< digito1 << " " << digito2 << " " << digito3 << " " << digito4 << endl;

    }else{
        cout << "Digite un numero de 4 cifras" << endl;
    }
    
    return 0;
}