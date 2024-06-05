#include "iostream"

using namespace std;

int main(){

    cout << "\nEjercicio 39. Leer tres numeros enteros y determinar si el penultimo digito de los tres numeros es igual.\n";
    cout << "\n################\n";

    int numero1, numero2, numero3;
    int penultimo1, penultimo2, penultimo3;

    cout << "\nDigite un numero entero uno: ";
    cin >> numero1;

    cout << "\nDigite un numero entero dos: ";
    cin >> numero2;

    cout << "\nDigite un numero entero tres: ";
    cin >> numero3;

    (numero1<0) ? numero1 = -numero1 : numero1;
    (numero2<0) ? numero2 = -numero2 : numero2;
    (numero3<0) ? numero3 = -numero3 : numero3;

    (numero1 >= 10) ? penultimo1 = (numero1 /10) % 10 : penultimo1 = numero1;
    (numero2 >= 10) ? penultimo2 = (numero2 /10) % 10 : penultimo2 = numero2;
    (numero3 >= 10) ? penultimo3 = (numero3 /10) % 10 : penultimo3 = numero3;


    if(penultimo1 == penultimo2){
        if (penultimo1 == penultimo3 ){
            cout << "Los tres penultimos digitos de los tres numeros  SON iguales" << endl;
        }else{
            cout << "Los tres penultimos digitos de los tres numeros NO soniguales" << endl;
        }
    }else{
        cout << "Los tres penultimos digitos de los tres numeros NO soniguales" << endl;
    }

    return 0;
}