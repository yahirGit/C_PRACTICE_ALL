#include "iostream"

using namespace std;

int main(){

    cout << "\nEjercicio 21. Leer tres numeros enteros de dos digitos cada uno y determinar en cual de ellos se encuentra el mayor digito\n";
    cout << "\n################\n";

    int numero1,numero2,numero3;
    int dgUnoNum1,dgDosNum1, dgUnoNum2, dgDosNum2,dgUnoNum3,dgDosNum3;
    int mayorNUm1,mayorNUm2,mayorNUm3;

    cout << "Digite un primer numero entero: ";
    cin >> numero1;

    cout << "Digite un segundo numero entero: ";
    cin >> numero2;

    cout << "Digite un tercero numero entero: ";
    cin >> numero3;

    if (numero1 < 0 ){
        numero1 = numero1 * (-1);
    }
    if (numero2 < 0 ){
        numero2 = numero2 * (-1);
    }
    if (numero3 < 0 ){
        numero3 = numero3 * (-1);
    }

    if ((numero1 <10 || numero1 >99) || (numero2 <10 || numero2 >99) || (numero3 <10 || numero3 > 99)){
        cout << "Digite un numero de dos digitos para todos los numeros.";
    } 
    if (numero1 >=10 && numero1 <=99){
        
        dgUnoNum1 = numero1 / 10;
        dgDosNum1 = numero1 % 10;
        if (dgUnoNum1 >= dgDosNum1){
            mayorNUm1 = dgUnoNum1;
        }else{
            mayorNUm1 = dgDosNum1;
        }
        cout << "Digitos numero #.1:  " << dgUnoNum1 << " " << dgDosNum1 << "\n";

    }
    if (numero2 >=10 && numero2 <=99){
        dgUnoNum2 = numero2 / 10;
        dgDosNum2 = numero2 % 10;
        if (dgUnoNum2 > dgDosNum2){
            mayorNUm2 = dgUnoNum2;
        }else{
            mayorNUm2 = dgDosNum2;
        }
        cout << "Digitos numero #.2:  " << dgUnoNum2 << " " << dgDosNum2 << "\n";

    }
    if (numero3 >=10 && numero3 <= 99){

        dgUnoNum3 = numero3 / 10;
        dgDosNum3 = numero3 % 10;
        if (dgUnoNum3 > dgDosNum3){
            mayorNUm3 = dgUnoNum3;
        }else{
            mayorNUm3 = dgDosNum3;
        }
        cout << "Digitos numero #.3:  " << dgUnoNum3 << " " << dgDosNum3 << "\n";
    }

    if((mayorNUm1 >= mayorNUm2) && (mayorNUm1 >= mayorNUm3)){
        cout << "El digito mayor de todos es: " << mayorNUm1;
    }else if((mayorNUm2 >= mayorNUm1) && (mayorNUm2 >= mayorNUm3)){
        cout << "El el digito mayor de todos es: " << mayorNUm2;
    }else if((mayorNUm3 >= mayorNUm1) && (mayorNUm3 >= mayorNUm2)){
        cout << "El digito mayor de todos es: " << mayorNUm3;
    }

    return 0;
}