#include "iostream"

using namespace std;


int main (){

    cout << "\nEjercicio 49. Leer un numero entero y, si es multiplo de 4, determinar si su ultimo digito es primo." << endl;

    cout << "\n##################\n" << endl;

    int numero;
    int ultimo_digito;

    cout << "Digite un numero entero: ";
    cin >> numero;

    if(numero % 4 == 0){
        ultimo_digito = numero % 10;

         if (ultimo_digito == 2 || ultimo_digito == 3 || ultimo_digito == 5 || ultimo_digito == 7){
            cout << "El numero es multiplo de 4= "<< numero <<" su ultimo digito es primo= " << ultimo_digito << endl;
         }else{
            cout << "El numero es multiplo de 4= "<< numero <<" pero su ultimo digito NO es primo= " << ultimo_digito << endl;
         }
    }else{
        cout << "El numero no es multiplo de 4."<< endl;
    }


    return 0;
}