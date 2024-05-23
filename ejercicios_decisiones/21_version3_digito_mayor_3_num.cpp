#include "iostream"

using namespace std;


int main(){

    cout << "\nEjercicio 21. Leer tres numeros enteros de dos digitos cada uno y determinar en cual de ellos se encuentra el mayor digito\n";
    cout << "\n################\n";

    //declaracion de variables
    int numero1,numero2,numero3;
    int dgUnoNum1,dgDosNum1, dgUnoNum2, dgDosNum2,dgUnoNum3,dgDosNum3;
    int mayorNUm1,mayorNUm2,mayorNUm3;

    //lectura y almacenamiento de valores en variables
    cout << "Digite un primer numero entero: ";
    cin >> numero1;

    cout << "Digite un segundo numero entero: ";
    cin >> numero2;

    cout << "Digite un tercero numero entero: ";
    cin >> numero3;

    //Operador ternario para transformar el numero en positivo
    (numero1 < 0) ? numero1 = -numero1 : numero1;
    (numero2 < 0) ? numero2 = -numero2 : numero2;
    (numero3 < 0) ? numero3 = -numero3 : numero3;

    //Establecemos los rangos no permitidos si es el caso algunos de los numeros esta fuera de los limites de 10 y 99 
    // El programa no se sequira ejecutando.
    if ((numero1 <10 || numero1 >99) || (numero2 <10 || numero2 >99) || (numero3 <10 || numero3 > 99)){
        cout << "Digite un numero de dos digitos para todos los numeros.";
        return 1;
    }

    //Almacenamos los digitos de cada numero
    dgUnoNum1 = numero1 / 10;
    dgDosNum1 = numero1 % 10;
    dgUnoNum2 = numero2 / 10;
    dgDosNum2 = numero2 % 10;
    dgUnoNum3 = numero3 / 10;
    dgDosNum3 = numero3 % 10;

    //hayamos el digito mayor de cada numero por separado usamos el operador
    //ternario ya que es una decision simple
    (dgUnoNum1 >= dgDosNum1) ? mayorNUm1 = dgUnoNum1 : mayorNUm1 = dgDosNum1;
    (dgUnoNum2 >= dgDosNum2) ? mayorNUm2 = dgUnoNum2 : mayorNUm2 = dgDosNum2;
    (dgUnoNum3 >= dgDosNum3) ? mayorNUm3 = dgUnoNum3 : mayorNUm3 = dgDosNum3;

    //Ahora decidimos cual de los tres numeros mayores es el mayor digito de los tres numeros
    if((mayorNUm1 >= mayorNUm2) && (mayorNUm1 >= mayorNUm3)){
        cout << "El digito mayor de todos es: " << mayorNUm1;
    }else if((mayorNUm2 >= mayorNUm1) && (mayorNUm2 >= mayorNUm3)){
        cout << "El el digito mayor de todos es: " << mayorNUm2;
    }else if((mayorNUm3 >= mayorNUm1) && (mayorNUm3 >= mayorNUm2)){
        cout << "El digito mayor de todos es: " << mayorNUm3;
    }


    return 0;
}