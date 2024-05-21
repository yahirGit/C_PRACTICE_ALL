#include <stdio.h>


int main(){

    printf("\nPrograma num 13. Leer dos números enteros de dos dígitos y determinar si la suma de los dos números origina un numero par\n");
    printf("\n============\n");

    //Declaramos variables
    //num1 = numero uno
    //num2 = numero dos
    int num1, num2, resultSuma;

    printf("Digite el numero uno: ");
    //leer las variables y almacenar su valor
    scanf("%d",&num1);
    
    printf("Digite el numero dos: ");
    //leer las variables y almacenar su valor
    scanf("%d",&num2);

    if ((num1 >= 10 && num1 <= 99) || (num1 >= -99 && num1 <= -10)){

         if ((num2 >= 10 && num2 <= 99) || (num2 >= -99 && num2 <= -10)){

            resultSuma = num1 + num2;
            if (resultSuma / 2 * 2 == resultSuma){
                printf("El numero %d es par", resultSuma);
            }else{
                printf("El numero %d es impar", resultSuma);
                
            }

         }else{

            printf("El numero DOS no es de dos digitos.");
         }
    }else{
        printf("El numero uno no es de dos digitos.");
    }

    return 0;
}