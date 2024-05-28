#include "iostream"

using namespace std;

int main(){

    cout << "\nEjercicio 37. Leer dos numeros enteros y determinar cual es multiplo de cual.\n";
    cout << "\n################\n";

    int numero1, numero2;

    cout << "\nDigite un numero entero: ";
    cin >> numero1;

    cout << "\nDigite un numero entero : ";
    cin >> numero2;

    (numero1<0) ? numero1 = -numero1 : numero1;
    (numero2<0) ? numero2 = -numero2 : numero2;

    if(numero1 == 0 || numero2 == 0){
        cout << "El cero es multiplo de todos los numeros" << " Numero 1: "<<numero1 <<" Numero 2: " << numero2 << endl;
    }else if(numero1 % numero2 == 0){
        cout << "numero1: " << numero1 << " es multiplo de: " << numero2;
    }else if(numero2 % numero1 == 0){
        cout << "numero2: " << numero2 << " es multiplo de: " << numero1;
    }else{
        cout << "Ninguno de los numeros es multiplo del otro." << endl;
    }

    return 0;
}