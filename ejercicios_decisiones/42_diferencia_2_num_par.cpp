#include "iostream"

using namespace std;

int main(){


    cout << "\nEjercicio 42. Leer dos numeros enteros y determinar si la difrerencia entre los dos es un numero par." << endl;
    cout << "\n##################\n" << endl;

    int numero1,numero2;
    int resta;

    cout << "Digite un numero entero: ";
    cin >> numero1;

    cout << "Digite un numero entero: ";
    cin >> numero2;

    resta = numero1 - numero2;

    //(resta < 0) ? resta = -resta : resta;

    if(resta % 2 == 0){
        cout << "La diferencia entre los dos numeros es un numero par." << endl;
    }else{
        cout << "La diferencia entre los dos numeros NO es un numero par" << endl;
    }

    return 0;
}