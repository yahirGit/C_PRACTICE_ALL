# include "iostream"

using namespace std;

int main()
{
   cout << "\nEjercicio 47. Leer dos numeros y, si la diferencia entre los dos numeros es par, mostrar en pantalla la suma de los digitos de los numeros; si dicha diferencia es un numero primo menor que 10, entonces mostrar en pantalla el producto de los dos numeros y, si la diferencia entre ellos termina en 4, mostrar en pantalla todos los digitos por separado." << endl;

    cout << "\n##################\n" << endl;

    int numero1,numero2;
    int dig_1_Num1,dig_2_Num1,dig_3_Num1,dig_4_Num1,dig_5_Num1,dig_6_Num1,dig_7_Num1,dig_8_Num1,dig_9_Num1;
    int dig_1_Num2,dig_2_Num2,dig_3_Num2,dig_4_Num2,dig_5_Num2,dig_6_Num2,dig_7_Num2,dig_8_Num2,dig_9_Num2;
    int resta;
    

    cout << "Digite un numero entero: ";
    cin >> numero1;

    cout << "Digite un numero entero: ";
    cin >> numero2;

    (numero1 < 0 ) ? numero1 = -numero1 : numero1;
    (numero2 < 0 ) ? numero2 = -numero2 : numero2;

    resta = (numero1 - numero2);

    if(resta % 10 == 4){
        if (numero1 >= 1 && numero1 <= 9){
                dig_9_Num1 = numero1 % 10;
                cout << "El numero1 tiene 1 digitos. " << dig_9_Num1 << endl;
            }
            else if (numero1 >= 10 && numero1 <= 99){
                dig_8_Num1 = numero1 / 10;
                dig_9_Num1 = numero1 % 10;
                cout << "El numero1 tiene 2 digitos. " << dig_8_Num1 << " " << dig_9_Num1 << endl;
            }
            else if (numero1 >= 100 && numero1 <= 999){
                dig_7_Num1 = (numero1 / 100);
                dig_8_Num1 = (numero1 / 10) % 10;
                dig_9_Num1 = numero1 % 10;
                cout << "El numero1 tiene 3 digitos. " << dig_7_Num1 << " , " << dig_8_Num1 << " , " << dig_9_Num1 << endl;
            }
            else if (numero1 >= 1000 && numero1 <= 9999){
                dig_6_Num1 = (numero1 / 1000) % 100;
                dig_7_Num1 = (numero1 / 100) % 10;
                dig_8_Num1 = (numero1 / 10) % 10;
                dig_9_Num1 = numero1 % 10;

                cout << "El numero1 tiene 4 digitos. " << dig_6_Num1 << " , " << dig_7_Num1 << " , " << dig_8_Num1 << " , " << dig_9_Num1 << endl;
            }
            else if (numero1 >= 10000 && numero1 <= 99999){
                dig_5_Num1 = (numero1 / 10000) % 100;
                dig_6_Num1 = (numero1 / 1000) % 100 % 10;
                dig_7_Num1 = (numero1 / 100) % 10;
                dig_8_Num1 = (numero1 / 10) % 10;
                dig_9_Num1 = numero1 % 10;

                cout << "El numero1 tiene 5 digitos. " << dig_5_Num1 << " , " << dig_6_Num1 << " , " << dig_7_Num1 << " , " << dig_8_Num1 << " , " << dig_9_Num1 << endl;
            }
            else if (numero1 >= 100000 && numero1 <= 999999){
                dig_4_Num1 = (numero1 / 100000) % 1000;
                dig_5_Num1 = (numero1 / 10000) % 1000 % 100 % 10;
                dig_6_Num1 = (numero1 / 1000) % 100 % 10;
                dig_7_Num1 = (numero1 / 100) % 10;
                dig_8_Num1 = (numero1 / 10) % 10;
                dig_9_Num1 = numero1 % 10;

                cout << "El numero1 tiene 6 digitos. " << dig_4_Num1 << " , " << dig_5_Num1 << " , " << dig_6_Num1 << " , " << dig_7_Num1 << " , " << dig_8_Num1 << " , " << dig_9_Num1 << endl;
            }
            else if (numero1 >= 1000000 && numero1 <= 9999999){
                dig_3_Num1 = (numero1 / 1000000) % 10000;
                dig_4_Num1 = (numero1 / 100000) % 10000 % 10;
                dig_5_Num1 = (numero1 / 10000) % 1000 % 10;
                dig_6_Num1 = (numero1 / 1000) % 100 % 10;
                dig_7_Num1 = (numero1 / 100) % 10;
                dig_8_Num1 = (numero1 / 10) % 10;
                dig_9_Num1 = numero1 % 10;

                cout << "El numero1 tiene 7 digitos. " << dig_3_Num1 << " , " << dig_4_Num1 << " , " << dig_5_Num1 << " , " << dig_6_Num1 << " , " << dig_7_Num1 << " , " << dig_8_Num1 << " , " << dig_9_Num1 << endl;
            }
            else if (numero1 >= 10000000 && numero1 <= 99999999){
                dig_2_Num1 = (numero1 / 10000000) % 100000;
                dig_3_Num1 = (numero1 / 1000000) % 100000 % 10;
                dig_4_Num1 = (numero1 / 100000) % 10000 % 10;
                dig_5_Num1 = (numero1 / 10000) % 1000 % 10;
                dig_6_Num1 = (numero1 / 1000) % 100 % 10;
                dig_7_Num1 = (numero1 / 100) % 10;
                dig_8_Num1 = (numero1 / 10) % 10;
                dig_9_Num1 = numero1 % 10;


                cout << "El numero1 tiene 8 digitos. " << dig_2_Num1 << " , " << dig_3_Num1 << " , " << dig_4_Num1 << " , " << dig_5_Num1 << " , " << dig_6_Num1 << " , " << dig_7_Num1 << " , " << dig_8_Num1 << " , " << dig_9_Num1 << endl;
            }
            else if (numero1 >= 100000000 && numero1 <= 999999999){
                dig_1_Num1 = (numero1 / 100000000) % 1000000;
                dig_2_Num1 = (numero1 / 10000000) % 1000000 % 10;
                dig_3_Num1 = (numero1 / 1000000) % 100000 % 10;
                dig_4_Num1 = (numero1 / 100000) % 10000 % 10;
                dig_5_Num1 = (numero1 / 10000) % 1000 % 10;
                dig_6_Num1 = (numero1 / 1000) % 100 % 10;
                dig_7_Num1 = (numero1 / 100) % 10;
                dig_8_Num1 = (numero1 / 10) % 10;
                dig_9_Num1 = numero1 % 10;

                cout << "El numero1 tiene 9 digitos. " << dig_1_Num1 << " , " << dig_2_Num1 << " , " << dig_3_Num1 << " , " << dig_4_Num1 << " , " << dig_5_Num1 << " , " << dig_6_Num1 << " , " << dig_7_Num1 << " , " << dig_8_Num1 << " , " << dig_9_Num1 << endl;
            }
            else
            {
                cout << "El numero1 tiene 10 o mas digitos " << endl;
            }

            if (numero2 >= 1 && numero2 <= 9){
                dig_9_Num2 = numero2 % 10;
                cout << "El numero2 tiene 1 digitos. " << dig_9_Num2 << endl;
            }
            else if (numero2 >= 10 && numero2 <= 99){
                dig_8_Num2 = numero2 / 10;
                dig_9_Num2 = numero2 % 10;
                cout << "El numero2 tiene 2 digitos. " << dig_8_Num2 << " " << dig_9_Num2 << endl;
            }
            else if (numero2 >= 100 && numero2 <= 999){

                dig_7_Num2 = (numero2 / 100);
                dig_8_Num2 = (numero2 / 10) % 10;
                dig_9_Num2 = numero2 % 10;
                cout << "El numero2 tiene 3 digitos. " << dig_7_Num2 << " , " << dig_8_Num2 << " , " << dig_9_Num2 << endl;
            }
            else if (numero2 >= 1000 && numero2 <= 9999){
                dig_6_Num2 = (numero2 / 1000) % 100;
                dig_7_Num2 = (numero2 / 100) % 10;
                dig_8_Num2 = (numero2 / 10) % 10;
                dig_9_Num2 = numero2 % 10;

                cout << "El numero2 tiene 4 digitos. " << dig_6_Num2 << " , " << dig_7_Num2 << " , " << dig_8_Num2 << " , " << dig_9_Num2 << endl;
            }
            else if (numero2 >= 10000 && numero2 <= 99999){
                dig_5_Num2 = (numero2 / 10000) % 100;
                dig_6_Num2 = (numero2 / 1000) % 100 % 10;
                dig_7_Num2 = (numero2 / 100) % 10;
                dig_8_Num2 = (numero2 / 10) % 10;
                dig_9_Num2 = numero2 % 10;

                cout << "El numero2 tiene 5 digitos. " << dig_5_Num2 << " , " << dig_6_Num2 << " , " << dig_7_Num2 << " , " << dig_8_Num2 << " , " << dig_9_Num2 << endl;
            }
            else if (numero2 >= 100000 && numero2 <= 999999){
                dig_4_Num2 = (numero2 / 100000) % 1000;
                dig_5_Num2 = (numero2 / 10000) % 1000 % 100 % 10;
                dig_6_Num2 = (numero2 / 1000) % 100 % 10;
                dig_7_Num2 = (numero2 / 100) % 10;
                dig_8_Num2 = (numero2 / 10) % 10;
                dig_9_Num2 = numero2 % 10;

                cout << "El numero2 tiene 6 digitos. " << dig_4_Num2 << " , " << dig_5_Num2 << " , " << dig_6_Num2 << " , " << dig_7_Num2 << " , " << dig_8_Num2 << " , " << dig_9_Num2 << endl;
            }
            else if (numero2 >= 1000000 && numero2 <= 9999999){
                dig_3_Num2 = (numero2 / 1000000) % 10000;
                dig_4_Num2 = (numero2 / 100000) % 10000 % 10;
                dig_5_Num2 = (numero2 / 10000) % 1000 % 10;
                dig_6_Num2 = (numero2 / 1000) % 100 % 10;
                dig_7_Num2 = (numero2 / 100) % 10;
                dig_8_Num2 = (numero2 / 10) % 10;
                dig_9_Num2 = numero2 % 10;

                cout << "El numero2 tiene 7 digitos. " << dig_3_Num2 << " , " << dig_4_Num2 << " , " << dig_5_Num2 << " , " << dig_6_Num2 << " , " << dig_7_Num2 << " , " << dig_8_Num2 << " , " << dig_9_Num2 << endl;
            }
            else if (numero2 >= 10000000 && numero2 <= 99999999){
                dig_2_Num2 = (numero2 / 10000000) % 100000;
                dig_3_Num2 = (numero2 / 1000000) % 100000 % 10;
                dig_4_Num2 = (numero2 / 100000) % 10000 % 10;
                dig_5_Num2 = (numero2 / 10000) % 1000 % 10;
                dig_6_Num2 = (numero2 / 1000) % 100 % 10;
                dig_7_Num2 = (numero2 / 100) % 10;
                dig_8_Num2 = (numero2 / 10) % 10;
                dig_9_Num2 = numero2 % 10;

                cout << "El numero2 tiene 8 digitos. " << dig_2_Num2 << " , " << dig_3_Num2 << " , " << dig_4_Num2 << " , " << dig_5_Num2 << " , " << dig_6_Num2 << " , " << dig_7_Num2 << " , " << dig_8_Num2 << " , " << dig_9_Num2 << endl;
            }
            else if (numero2 >= 100000000 && numero2 <= 999999999){
                dig_1_Num2 = (numero2 / 100000000) % 1000000;
                dig_2_Num2 = (numero2 / 10000000) % 1000000 % 10;
                dig_3_Num2 = (numero2 / 1000000) % 100000 % 10;
                dig_4_Num2 = (numero2 / 100000) % 10000 % 10;
                dig_5_Num2 = (numero2 / 10000) % 1000 % 10;
                dig_6_Num2 = (numero2 / 1000) % 100 % 10;
                dig_7_Num2 = (numero2 / 100) % 10;
                dig_8_Num2 = (numero2 / 10) % 10;
                dig_9_Num2 = numero2 % 10;

                cout << "El numero2 tiene 9 digitos. " << dig_1_Num2 << " , " << dig_2_Num2 << " , " << dig_3_Num2 << " , " << dig_4_Num2 << " , " << dig_5_Num2 << " , " << dig_6_Num2 << " , " << dig_7_Num2 << " , " << dig_8_Num2 << " , " << dig_9_Num2 << endl;
            }
            else{
                cout << "El numero2 tiene 10 o mas digitos " << endl;
            }
            
    }else if(resta % 2 == 0){
        int sumDigitosNuM1;
        if (numero1 != 0){
            if (numero1 >= 1 && numero1 <= 9){
                dig_9_Num1 = numero1 % 10;
                sumDigitosNuM1 = dig_9_Num1;
                //cout << "El numero1 tiene 1 digitos. " << dig_9_Num1 << endl;
            }
            else if (numero1 >= 10 && numero1 <= 99){
                dig_8_Num1 = numero1 / 10;
                dig_9_Num1 = numero1 % 10;
                sumDigitosNuM1 = dig_8_Num1 + dig_9_Num1;
                //cout << "El numero1 tiene 2 digitos. " << dig_8_Num1 << " " << dig_9_Num1 << endl;
            }
            else if (numero1 >= 100 && numero1 <= 999){
                dig_7_Num1 = (numero1 / 100);
                dig_8_Num1 = (numero1 / 10) % 10;
                dig_9_Num1 = numero1 % 10;
                sumDigitosNuM1 = dig_7_Num1 + dig_8_Num1 + dig_9_Num1;
                //cout << "El numero1 tiene 3 digitos. " << dig_7_Num1 << " , " << dig_8_Num1 << " , " << dig_9_Num1 << endl;
            }
            else if (numero1 >= 1000 && numero1 <= 9999){
                dig_6_Num1 = (numero1 / 1000) % 100;
                dig_7_Num1 = (numero1 / 100) % 10;
                dig_8_Num1 = (numero1 / 10) % 10;
                dig_9_Num1 = numero1 % 10;

                sumDigitosNuM1 = dig_6_Num1 + dig_7_Num1 + dig_8_Num1 + dig_9_Num1;

                //cout << "El numero1 tiene 4 digitos. " << dig_6_Num1 << " , " << dig_7_Num1 << " , " << dig_8_Num1 << " , " << dig_9_Num1 << endl;
            }
            else if (numero1 >= 10000 && numero1 <= 99999){
                dig_5_Num1 = (numero1 / 10000) % 100;
                dig_6_Num1 = (numero1 / 1000) % 100 % 10;
                dig_7_Num1 = (numero1 / 100) % 10;
                dig_8_Num1 = (numero1 / 10) % 10;
                dig_9_Num1 = numero1 % 10;

                sumDigitosNuM1 = dig_5_Num1 + dig_6_Num1 + dig_7_Num1 + dig_8_Num1 + dig_9_Num1;

                //cout << "El numero1 tiene 5 digitos. " << dig_5_Num1 << " , " << dig_6_Num1 << " , " << dig_7_Num1 << " , " << dig_8_Num1 << " , " << dig_9_Num1 << endl;
            }
            else if (numero1 >= 100000 && numero1 <= 999999){
                dig_4_Num1 = (numero1 / 100000) % 1000;
                dig_5_Num1 = (numero1 / 10000) % 1000 % 100 % 10;
                dig_6_Num1 = (numero1 / 1000) % 100 % 10;
                dig_7_Num1 = (numero1 / 100) % 10;
                dig_8_Num1 = (numero1 / 10) % 10;
                dig_9_Num1 = numero1 % 10;

                sumDigitosNuM1 = dig_4_Num1 + dig_5_Num1 + dig_6_Num1 + dig_7_Num1 + dig_8_Num1 + dig_9_Num1;

                //cout << "El numero1 tiene 6 digitos. " << dig_4_Num1 << " , " << dig_5_Num1 << " , " << dig_6_Num1 << " , " << dig_7_Num1 << " , " << dig_8_Num1 << " , " << dig_9_Num1 << endl;
            }
            else if (numero1 >= 1000000 && numero1 <= 9999999){
                dig_3_Num1 = (numero1 / 1000000) % 10000;
                dig_4_Num1 = (numero1 / 100000) % 10000 % 10;
                dig_5_Num1 = (numero1 / 10000) % 1000 % 10;
                dig_6_Num1 = (numero1 / 1000) % 100 % 10;
                dig_7_Num1 = (numero1 / 100) % 10;
                dig_8_Num1 = (numero1 / 10) % 10;
                dig_9_Num1 = numero1 % 10;

                sumDigitosNuM1 = dig_3_Num1 + dig_4_Num1 + dig_5_Num1 + dig_6_Num1 + dig_7_Num1 + dig_8_Num1 + dig_9_Num1;

                //cout << "El numero1 tiene 7 digitos. " << dig_3_Num1 << " , " << dig_4_Num1 << " , " << dig_5_Num1 << " , " << dig_6_Num1 << " , " << dig_7_Num1 << " , " << dig_8_Num1 << " , " << dig_9_Num1 << endl;
            }
            else if (numero1 >= 10000000 && numero1 <= 99999999){
                dig_2_Num1 = (numero1 / 10000000) % 100000;
                dig_3_Num1 = (numero1 / 1000000) % 100000 % 10;
                dig_4_Num1 = (numero1 / 100000) % 10000 % 10;
                dig_5_Num1 = (numero1 / 10000) % 1000 % 10;
                dig_6_Num1 = (numero1 / 1000) % 100 % 10;
                dig_7_Num1 = (numero1 / 100) % 10;
                dig_8_Num1 = (numero1 / 10) % 10;
                dig_9_Num1 = numero1 % 10;

                sumDigitosNuM1 = dig_2_Num1 + dig_3_Num1 + dig_4_Num1 + dig_5_Num1 + dig_6_Num1 + dig_7_Num1 + dig_8_Num1 + dig_9_Num1;

                //cout << "El numero1 tiene 8 digitos. " << dig_2_Num1 << " , " << dig_3_Num1 << " , " << dig_4_Num1 << " , " << dig_5_Num1 << " , " << dig_6_Num1 << " , " << dig_7_Num1 << " , " << dig_8_Num1 << " , " << dig_9_Num1 << endl;
            }
            else if (numero1 >= 100000000 && numero1 <= 999999999){
                dig_1_Num1 = (numero1 / 100000000) % 1000000;
                dig_2_Num1 = (numero1 / 10000000) % 1000000 % 10;
                dig_3_Num1 = (numero1 / 1000000) % 100000 % 10;
                dig_4_Num1 = (numero1 / 100000) % 10000 % 10;
                dig_5_Num1 = (numero1 / 10000) % 1000 % 10;
                dig_6_Num1 = (numero1 / 1000) % 100 % 10;
                dig_7_Num1 = (numero1 / 100) % 10;
                dig_8_Num1 = (numero1 / 10) % 10;
                dig_9_Num1 = numero1 % 10;

                sumDigitosNuM1 = dig_1_Num1 + dig_2_Num1 + dig_3_Num1 + dig_4_Num1 + dig_5_Num1 + dig_6_Num1 + dig_7_Num1 + dig_8_Num1 + dig_9_Num1;

                //cout << "El numero1 tiene 9 digitos. " << dig_1_Num1 << " , " << dig_2_Num1 << " , " << dig_3_Num1 << " , " << dig_4_Num1 << " , " << dig_5_Num1 << " , " << dig_6_Num1 << " , " << dig_7_Num1 << " , " << dig_8_Num1 << " , " << dig_9_Num1 << endl;
            }
            else{
                cout << "El numero1 tiene 10 o mas digitos" << endl;
            }
        } // El fin del num1

        int sumDigitosNuM2;
        if (numero2 != 0){
            
            if (numero2 >= 1 && numero2 <= 9){
                dig_9_Num2 = numero2 % 10;
                sumDigitosNuM2 = dig_9_Num2;
                //cout << "El numero2 tiene 1 digitos. " << dig_9_Num2 << endl;
            }
            else if (numero2 >= 10 && numero2 <= 99){
                dig_8_Num2 = numero2 / 10;
                dig_9_Num2 = numero2 % 10;
                sumDigitosNuM2 = dig_8_Num2 + dig_9_Num2;
                //cout << "El numero2 tiene 2 digitos. " << dig_8_Num2 << " " << dig_9_Num2 << endl;
            }
            else if (numero2 >= 100 && numero2 <= 999){

                dig_7_Num2 = (numero2 / 100);
                dig_8_Num2 = (numero2 / 10) % 10;
                dig_9_Num2 = numero2 % 10;
                sumDigitosNuM2 = dig_7_Num2 + dig_8_Num2 + dig_9_Num2;
                //cout << "El numero2 tiene 3 digitos. " << dig_7_Num2 << " , " << dig_8_Num2 << " , " << dig_9_Num2 << endl;
            }
            else if (numero2 >= 1000 && numero2 <= 9999){
                dig_6_Num2 = (numero2 / 1000) % 100;
                dig_7_Num2 = (numero2 / 100) % 10;
                dig_8_Num2 = (numero2 / 10) % 10;
                dig_9_Num2 = numero2 % 10;

                sumDigitosNuM2 = dig_6_Num2 + dig_7_Num2 + dig_8_Num2 + dig_9_Num2;

                //cout << "El numero2 tiene 4 digitos. " << dig_6_Num2 << " , " << dig_7_Num2 << " , " << dig_8_Num2 << " , " << dig_9_Num2 << endl;
            }
            else if (numero2 >= 10000 && numero2 <= 99999){
                dig_5_Num2 = (numero2 / 10000) % 100;
                dig_6_Num2 = (numero2 / 1000) % 100 % 10;
                dig_7_Num2 = (numero2 / 100) % 10;
                dig_8_Num2 = (numero2 / 10) % 10;
                dig_9_Num2 = numero2 % 10;

                sumDigitosNuM2 = dig_5_Num2 + dig_6_Num2 + dig_7_Num2 + dig_8_Num2 + dig_9_Num2;

                //cout << "El numero2 tiene 5 digitos. " << dig_5_Num2 << " , " << dig_6_Num2 << " , " << dig_7_Num2 << " , " << dig_8_Num2 << " , " << dig_9_Num2 << endl;
            }
            else if (numero2 >= 100000 && numero2 <= 999999){
                dig_4_Num2 = (numero2 / 100000) % 1000;
                dig_5_Num2 = (numero2 / 10000) % 1000 % 100 % 10;
                dig_6_Num2 = (numero2 / 1000) % 100 % 10;
                dig_7_Num2 = (numero2 / 100) % 10;
                dig_8_Num2 = (numero2 / 10) % 10;
                dig_9_Num2 = numero2 % 10;

                sumDigitosNuM2 = dig_4_Num2 + dig_5_Num2 + dig_6_Num2 + dig_7_Num2 + dig_8_Num2 + dig_9_Num2;

                //cout << "El numero2 tiene 6 digitos. " << dig_4_Num2 << " , " << dig_5_Num2 << " , " << dig_6_Num2 << " , " << dig_7_Num2 << " , " << dig_8_Num2 << " , " << dig_9_Num2 << endl;
            }
            else if (numero2 >= 1000000 && numero2 <= 9999999){
                dig_3_Num2 = (numero2 / 1000000) % 10000;
                dig_4_Num2 = (numero2 / 100000) % 10000 % 10;
                dig_5_Num2 = (numero2 / 10000) % 1000 % 10;
                dig_6_Num2 = (numero2 / 1000) % 100 % 10;
                dig_7_Num2 = (numero2 / 100) % 10;
                dig_8_Num2 = (numero2 / 10) % 10;
                dig_9_Num2 = numero2 % 10;

                sumDigitosNuM2 = dig_3_Num2 + dig_4_Num2 + dig_5_Num2 + dig_6_Num2 + dig_7_Num2 + dig_8_Num2 + dig_9_Num2;

                //cout << "El numero2 tiene 7 digitos. " << dig_3_Num2 << " , " << dig_4_Num2 << " , " << dig_5_Num2 << " , " << dig_6_Num2 << " , " << dig_7_Num2 << " , " << dig_8_Num2 << " , " << dig_9_Num2 << endl;
            }
            else if (numero2 >= 10000000 && numero2 <= 99999999){
                dig_2_Num2 = (numero2 / 10000000) % 100000;
                dig_3_Num2 = (numero2 / 1000000) % 100000 % 10;
                dig_4_Num2 = (numero2 / 100000) % 10000 % 10;
                dig_5_Num2 = (numero2 / 10000) % 1000 % 10;
                dig_6_Num2 = (numero2 / 1000) % 100 % 10;
                dig_7_Num2 = (numero2 / 100) % 10;
                dig_8_Num2 = (numero2 / 10) % 10;
                dig_9_Num2 = numero2 % 10;

                sumDigitosNuM2 = dig_2_Num2 + dig_3_Num2 + dig_4_Num2 + dig_5_Num2 + dig_6_Num2 + dig_7_Num2 + dig_8_Num2 + dig_9_Num2;

                //cout << "El numero2 tiene 8 digitos. " << dig_2_Num2 << " , " << dig_3_Num2 << " , " << dig_4_Num2 << " , " << dig_5_Num2 << " , " << dig_6_Num2 << " , " << dig_7_Num2 << " , " << dig_8_Num2 << " , " << dig_9_Num2 << endl;
            }
            else if (numero2 >= 100000000 && numero2 <= 999999999){
                dig_1_Num2 = (numero2 / 100000000) % 1000000;
                dig_2_Num2 = (numero2 / 10000000) % 1000000 % 10;
                dig_3_Num2 = (numero2 / 1000000) % 100000 % 10;
                dig_4_Num2 = (numero2 / 100000) % 10000 % 10;
                dig_5_Num2 = (numero2 / 10000) % 1000 % 10;
                dig_6_Num2 = (numero2 / 1000) % 100 % 10;
                dig_7_Num2 = (numero2 / 100) % 10;
                dig_8_Num2 = (numero2 / 10) % 10;
                dig_9_Num2 = numero2 % 10;

                sumDigitosNuM2 = dig_1_Num2 + dig_2_Num2 + dig_3_Num2 + dig_4_Num2 + dig_5_Num2 + dig_6_Num2 + dig_7_Num2 + dig_8_Num2 + dig_9_Num2;

                //cout << "El numero2 tiene 9 digitos. " << dig_1_Num2 << " , " << dig_2_Num2 << " , " << dig_3_Num2 << " , " << dig_4_Num2 << " , " << dig_5_Num2 << " , " << dig_6_Num2 << " , " << dig_7_Num2 << " , " << dig_8_Num2 << " , " << dig_9_Num2 << endl;
            }
            else{
                cout << "El numero2 tiene 10 o mas digitos " << endl;
            }
        } // Si el numero 2 diferente de cero Fin

        cout << "La suma de los digitos de numero1: " << numero1 << " y numero2: "<< numero2 << " Es: "<< sumDigitosNuM1+ sumDigitosNuM2 << endl;

    }else if(resta < 10){
            if(resta == 2 || resta == 3 || resta == 5 || resta == 7){
                cout << "El producto de los numero1: " << numero1 << " y numero2: "<< numero2 << " Es: "<< numero1*numero2 << endl;
            }
    }else{
        cout << "La diferencia no es un par, no es un primo menor que 10, y no es igual a 4." << endl;
    }
    
    return 0;
}