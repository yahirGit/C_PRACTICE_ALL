#include "iostream"

using namespace std;


int main(){

    cout << "\nEjercicio 40. Leer dos números enteros y, si la diferencia entre los dos es menor o igual a 10, entonces mostrar en pantalla todos los enteros comprendidos entre el menor y el mayor de los números leídos." << endl;
    cout << "\n==================" << endl;

    int numero1, numero2;
    int resta;
    int menor,mayor;

    cout << "Digite un numero entero: ";    
    cin >> numero1;

    cout << "Digite otro entero: ";
    cin >> numero2;

    (numero1 < 0) ? numero1 = -numero1 : numero1;
    (numero2 < 0) ? numero2 = -numero2 : numero2;

    /*Clacular la resta usando operador ternario*/
    (numero1 > numero2) ? resta = numero1 - numero2 : resta = numero2 - numero1;

    //EL menor de los numeros
    if (numero1 > numero2){
        menor = numero2;
        mayor = numero1;
    }else{
        menor = numero1;
        mayor = numero2;
    }

    if(resta > 0 && resta <= 10){
        if(menor == mayor){
            cout << "Los dos iguales" << endl;
        }else{ 
            cout << "\nEl menor es: " << menor << endl;
            cout << "El rango de numeros entre el menor y el mayor es: " << endl;
            if (menor + 1 <= mayor){
                cout << menor + 1 << endl;
                if (menor + 2 <= mayor){
                    cout << menor + 2 << endl;
                    if (menor + 3 <= mayor){
                        cout << menor + 3 << endl;
                        if (menor + 4 <= mayor){
                            cout << menor + 4 << endl;
                            if (menor + 5 <= mayor){
                                cout << menor + 5 << endl;
                                if (menor + 6 <= mayor){
                                    cout << menor + 6 << endl;
                                    if (menor + 7 <= mayor){
                                        cout << menor + 7 << endl;
                                        if (menor + 8 <= mayor){
                                            cout << menor + 8 << endl;
                                            if (menor + 9 <= mayor){
                                                cout << menor + 9 << endl;
                                                if (menor + 10 <= mayor){
                                                    cout << menor + 10 << endl;
                                                }  
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } // mientras que se mantenga que los numeros no sean iguales realizara esta decision.
    }else {
        cout << "La diferencia entre los numeros es mayor a 10." << endl;
    }
    /*Para realizarlo con bucle for*/

    // cout << "Los numeros que entre el menor y el mayor son";
    // for (size_t i = menor; i <= mayor; i++){
    //     cout << i << " ";
    // }
        
    return 0;
}