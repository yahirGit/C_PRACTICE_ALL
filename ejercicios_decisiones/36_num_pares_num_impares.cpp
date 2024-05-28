#include "iostream"

using namespace std;

int main(){

    cout << "\nEjercicio 36. Leer un numero entero de cuatro digitos y determinar si tiene mas digitos pares o impares.\n";
    cout << "\n################\n";

    int numero;
    int digito1, digito2, digito3, digito4;
    int contar_pares=0, contar_impares=0;

    cout << "\nDigite un numero entero de 4 digitos: ";
    cin >> numero;

    if (numero < 0){
        numero = -numero;
    }
    if (numero >= 1000 && numero <= 9999){
        digito1 = numero / 1000;
        digito2 = (numero / 100 ) % 10;
        digito3 = (numero % 100) / 10;
        digito4 = (numero % 10);

        (digito1 % 2 == 0 ) ? contar_pares++ : contar_impares++; 
        (digito2 % 2 == 0 ) ? contar_pares++ : contar_impares++; 
        (digito3 % 2 == 0 ) ? contar_pares++ : contar_impares++; 
        (digito4 % 2 == 0 ) ? contar_pares++ : contar_impares++; 

        if (contar_pares == contar_impares){
            cout << "El numero tiene la misma cantidad de pares e impares: " << "pares: "<<contar_pares << " imapres: "<< contar_impares<< endl;
        }else if(contar_pares>contar_impares){
            cout << "El numero tiene mayor cantidad de digitos pares: " << contar_pares << endl;
        }else{
            cout << "El numero tiene mayor cantida de digitos impares: " << contar_impares << endl;
        }
        
    }else{
        cout << "\n Solo se permiten numeros de 4 digitos";
    }
    
    return 0;
}