#include "iostream"

using namespace std;

int main(){

    cout << "\nEjercicio 28. Leer un numero entero menor que 50 y positivo y determinar si es un numero primo.\n";
    cout << "\n################\n";

    int numero;

    cout << "Digite un numero entero de menor que 50: ";
    cin >> numero;

    //Cambiamos el if simple a operador ternario para ahorrar lineas de codigo.
    numero < 0 ? numero = -numero: numero;

    if (numero >= 0 && numero < 50){

        if(numero == 2 || numero == 3 || numero == 5 || numero == 7 || numero == 11 || numero == 13 || numero == 17 || numero == 19 || numero == 23 || 
           numero == 29 || numero == 31 || numero == 37 || numero == 41 || numero == 43 || numero == 47){

                cout << "El numero que digito es: "<< numero << " y es primo." << endl;
           }else{

                cout << "El numero que digito es: "<< numero << " y NO es primo." << endl;
           }
        
    }else{
        cout << "Digite un numero positivo menor que 50" << endl;
    }
    
    return 0;
}