#include "iostream"

using namespace std;

int main(){

    cout << "\nEjercicio 27. Leer un numero entero de cuatro digitos y determinar cuantos digitos pares tiene.\n";
    cout << "\n################\n";

    int numero;
    int digito1, digito2, digito3, digito4;
    int contador_pares = 0;

    cout << "Digite un numero entero de 4 digitos: ";
    cin >> numero;

    //Cambiamos el if simple a operador ternario para ahorrar lineas de codigo.
    numero < 0 ? numero = -numero: numero;

    if (numero >= 1000 && numero <= 9999){

        digito1 = (numero / 1000);
        digito2 = (numero / 100) % 10;
        digito3 = (numero % 100) / 10;
        digito4 = numero % 10;

        //Cambiamos a operador ternario los if en secuencia ya que los if no es necesario que tengan un sino
        digito1 % 2 == 0 ? contador_pares++ : contador_pares; 
        digito2 % 2 == 0 ? contador_pares++ : contador_pares; 
        digito3 % 2 == 0 ? contador_pares++ : contador_pares; 
        digito4 % 2 == 0 ? contador_pares++ : contador_pares; 

        cout << "Sus digitos son "<< digito1 << " " << digito2 << " " << digito3 << " " << digito4 << " los pares son: "<< contador_pares << endl;

    }else{
        cout << "Digite un numero de 4 cifras" << endl;
    }
    
    return 0;
}