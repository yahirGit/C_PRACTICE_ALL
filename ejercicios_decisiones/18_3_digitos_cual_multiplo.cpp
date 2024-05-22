#include "iostream"

//En c++ permite acceder directamente a las funciones sin usar std::cout 
using namespace std;

int main(){

    cout << "\nPrograma num 18. Leer un numero entero de tres digitos y determinar si algun digito es multiplo de los otros.\n";
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

        if (digito1 != 0 && digito2 == 0 && digito3 == 0){
            cout << "El primer digito " << digito1 << " es multiplo de los digitos " << digito2 << " y " << digito3 << ".\n";
        }else if((digito1 % digito2 == 0) && (digito1 % digito3 == 0)){
            cout << "El primer digito " << digito1 << " es multiplo de los digitos " << digito2 << " y " << digito3 << ".\n";
        }else if ((digito2 % digito1 == 0) && (digito2 % digito3 == 0)){
            cout << "El segundo digito " << digito2 << " " << "es multiplo del digito uno y tres";
        }else if ((digito3 % digito1 == 0) && (digito3 % digito2 == 0)){
            cout << "El tercer digito " << digito3 << " " << "es multiplo del digito uno y dos";
        }else{
            cout << "Ninguno es multiplo de los otros";
        }
        
    }else{
            cout << "Digite un numero de tres digitos.";
    }

    return 0;
}