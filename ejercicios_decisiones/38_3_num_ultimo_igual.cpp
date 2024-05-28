#include "iostream"

using namespace std;

int main(){

    cout << "\nEjercicio 38. Leer tres numeros enteros y determinar si el ultimo digito de los tres numeros es igual.\n";
    cout << "\n################\n";

    int numero1, numero2, numero3;
    int ulDigitoNum1, ulDigitoNum2, ulDigitoNum3;

    cout << "\nDigite un numero entero: ";
    cin >> numero1;

    cout << "\nDigite un numero entero : ";
    cin >> numero2;

    cout << "\nDigite un numero entero : ";
    cin >> numero3;

    (numero1<0) ? numero1 = -numero1 : numero1;
    (numero2<0) ? numero2 = -numero2 : numero2;
    (numero3<0) ? numero3 = -numero3 : numero3;

    ulDigitoNum1 = (numero1 % 10);
    ulDigitoNum2 = (numero2 % 10);
    ulDigitoNum3 = (numero3 % 10);

    cout << "Los ultimos digitos de los numeros son: " << "1: "<< ulDigitoNum1 << " 2: " << ulDigitoNum2 << " 3: " << ulDigitoNum3 << endl;


    if ((ulDigitoNum1 == ulDigitoNum2) && (ulDigitoNum1 == ulDigitoNum3)){
        cout << "\nTodos los ultimos digitos son iguales.";
    }else if((ulDigitoNum2 == ulDigitoNum1) && (ulDigitoNum2 == ulDigitoNum3)){
        cout << "\nTodos los ultimos digitos son iguales.";
    }else if((ulDigitoNum3 == ulDigitoNum1) && (ulDigitoNum3 == ulDigitoNum2)){
        cout << "\nTodos los ultimos digitos son iguales.";
    }else{
        cout << "\nTodos los ultimos digitos NO SON iguales.";
    }
    

    return 0;
}