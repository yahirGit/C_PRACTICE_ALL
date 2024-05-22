#include "iostream"

//En c++ permite acceder diractamente a las funciones sin usar std::cout 
using namespace std;

int main(){

    cout << "\nPrograma num 16. Leer un numero entero de tres digitos y determinar si almenos dos de sus tres digitos son iguales.\n";
    cout << "\n============\n";

    int num, digito1, digito2, digito3;

    cout << "Digite un numero entero de tres digitos: ";
    cin >> num;

    if (num < 0){
        num = -num;
    }
    if( num >= 100 && num <= 999){
        digito1 = num / 100;
        digito2 = (num % 100) / 10;
        digito3 = num % 10;

        if (digito1 == digito2 || digito1 == digito3 || digito2 == digito1 || digito2 == digito3 || digito3 == digito1 || digito3 == digito2){
            cout << "Al menos dos de sus tres digitos son iguales";
        }else{
            cout << "Parece que no tiene como minimo dos digitos iguales";
        }

        //cout << "Digito  el numero " << num << " y sus digitos son: " << digito1 << " " << digito2 << " " << digito3;

    }else{
        cout << "Digite un numero de tres digitos.";
    }

    return 0;
}
