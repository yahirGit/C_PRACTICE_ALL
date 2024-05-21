#include <stdio.h>


int main(){

    printf("\nPrograma num 14. Leer dos números enteros de dos dígitos y determinar a cuanto es igual la suma de todos sus dígitos.\n");
    printf("\n============\n");

    //Declaramos variables
    //num1 = numero uno
    //num2 = numero dos
    int num1, num2, resultSuma, pd1, ud1, pd2, ud2;

    printf("Digite el numero uno: ");
    //leer las variables y almacenar su valor
    scanf("%d",&num1);
    
    printf("Digite el numero dos: ");
    //leer las variables y almacenar su valor
    scanf("%d",&num2);

    if (num1 < 0)
    {
        num1 = -num1;
    }
    if (num2 < 0)
    {
        num2 = -num2;
    }

    //Condicion que solo acepta numeros entre 10 y 99 para num1 y num2
    if ((num1 >= 10 && num1 <=99) && (num2 >= 10 && num2 <=99)){
        pd1 = num1 / 10;
        ud1 = num1 % 10;

        pd2 = num2 / 10;
        ud2 = num2 % 10;

        resultSuma = pd1 + ud1 + pd2 + ud2;

        printf("La suma de todos los digitos de los numeros uno: %d y dos: %d es la siguiente = %d\n",num1,num2,resultSuma);

        

    }else{
         printf("Digite un numero de dos digitos para ambos numeros");
    }

    return 0;
}