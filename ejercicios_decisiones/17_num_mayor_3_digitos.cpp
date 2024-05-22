#include "iostream"

//En c++ permite acceder directamente a las funciones sin usar std::cout 
using namespace std;

int main(){

    cout << "\nPrograma num 17. Leer un numero entero de tres digitos y determinar en que posicion esta el mayor digito.\n";
    cout << "\n============\n";


    int num, digito1, digito2, digito3;

    cout << "Digite un numero entero de tres digitos: ";
    cin >> num;

    if (num < 0){
        num = -num;
    }
    if (num >=100 && num <= 999){

        digito1 = num / 100;
        digito2 = (num % 100) /10;
        digito3= num % 10;

        if (digito1 > digito2 && digito1 > digito3){
            cout << "El primer digito " << digito1 << " " << "Es el mayor";
        }else if (digito2 > digito1 && digito2 > digito3){
            cout << "El segundo digito " << digito2 << " " << "Es el mayor";
        }else if (digito3 > digito1 && digito3 > digito2){
            cout << "El tercer digito " << digito3 << " " << "Es el mayor";
        }else if((digito1 == digito2 && digito1 == digito3) && (digito2 == digito1 && digito2 == digito3) && (digito3 == digito1 && digito3 == digito2)){
            cout << "Los tres digitos son iguales.";
        }else{
            cout << "Minimo dos digitos son iguales" << " " << digito1 << " " << digito2 << " " << digito3 << ".";
        }

    }else{
        cout << "Digite un numero de tres digitos.";
    }

    return 0;
}