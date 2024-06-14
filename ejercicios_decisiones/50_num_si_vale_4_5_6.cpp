#include "iostream"

using namespace std;


int main (){

    cout << "\nEjercicio 50. Leer un numero entero y, si es multiplo de 4, mostrar en pantalla su mitad;si es multiplo de 5, mostrar en pantalla su cuadrado y, si es multiplo de 6, mostrar en pantalla su primer digito asumir que el numero no es mayor que 100." << endl;

    cout << "\n##################\n" << endl;

    int numero;
    int digito_1;

    cout << "Digite un numero entero: ";
    cin >> numero;

    (numero < 0 ) ? numero = -numero: numero;

    if (numero != 0){
        if (numero>=1 && numero <=100){

            if(numero % 4 == 0){
                cout << "El numero es multiplo de 4= "<< numero <<" su mitad es= " << (numero / 2) << endl;
            }
            if (numero % 5 == 0){
                cout << "El numero es multiplo de 5= "<< numero <<" su cuadrado es= " << (numero * 2) << endl;
            }
            if (numero % 6 == 0){
                if (numero >= 1 && numero < 10){
                    digito_1 = numero % 10;
                    cout << "El numero es multiplo de 6= "<< numero <<" su primer digito es= " << digito_1 << endl;
                }else if(numero >= 10 && numero < 99){
                    digito_1 = (numero / 10) % 10;
                    cout << "El numero es multiplo de 6= "<< numero <<" su primer digito es= " << digito_1 << endl;
                }
            }
            if ((numero % 4 != 0) && (numero % 5 != 0) && (numero % 6 != 0)){
                cout << "El numero no es multiplo de 4 ni de 5 ni de 6= "<< numero << endl;
            }

        }else{
            cout << "El numero es mayor que 100." << endl;
        }
    }

    


    return 0;
}