# include "iostream"

using namespace std;

int main()
{
   cout << "\nEjercicio 46. Leer un numero entero de 2 digitos y, si termina en 1, mostrar en pantalla su primer digito; si termina en 2, mostrar en pantalla la suma de sus digitos y, si termina en 3, mostrar en pantalla el producto de sus digitos." << endl;

    cout << "\n##################\n" << endl;

    int numero;
    int digito1,digito2;

    cout << "Digite un numero entero de 2 digitos: ";
    cin >> numero;

    if(numero < 10 || numero > 99){
        cout << "El numero no es de dos digitos." << endl;
        return 1;
    }
    digito1 = numero / 10;
    digito2 = numero % 10;

    switch(digito2){
        case 1: cout << "El primer digito del numero es: "<< digito1 << endl;
        break;
        case 2: cout << "La suma de los digitos del numero: "<< (digito1 + digito2) << endl;
        break;
        case 3: cout << "El producto de los digitos del numero es: " << (digito1 * digito2) << endl;
        break;
        default: cout << "El numero no termina en 1, 2 o 3." << endl;
    }

    return 0;
}