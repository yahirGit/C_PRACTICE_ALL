#include <stdio.h>


int main(){

    printf("\nPrograma num 12. Leer dos numeros enteros de dos digitos y determinar si tienen digitos comunes.\n");
    printf("\n============\n");

    //Declaramos variables
    //pd = primer digito
    //ud = ultimo digito
    int num1, num2, pd1, ud1, pd2, ud2;

    printf("Digite el numero uno: ");
    //leer las variables y almacenar su valor
    scanf("%d",&num1);
    
    printf("Digite el numero dos: ");
    //leer las variables y almacenar su valor
    scanf("%d",&num2);

    if(num1 < 0 ){
        num1 = -num1;
    }
    if(num2 < 0 ){
        num2 = -num2;
    }
    //Condicion que solo acepta numeros entre 10 y 99 para num1 y num2
    if ((num1 >= 10 && num1 <=99) && (num2 >= 10 && num2 <=99)){
        pd1 = num1 / 10;
        ud1 = num1 % 10;

        pd2 = num2 / 10;
        ud2 = num2 % 10;

        if(pd1 == pd2 && pd1 == ud2 && ud1 == pd2 && ud1 == ud2 ){
            
            printf("TODOS los digitos de numero uno: %d y dos: %d, son comunes\n", num1,num2);
            
        }else if(pd1 == pd2 || pd1 == ud2 || ud1 == pd2 || ud1 == ud2){

            printf("Los numeros uno: %d y dos: %d, tienen digitos comunes\n", num1,num2);

        }else{
            printf("Los numeros uno: %d y dos: %d, NO tienen digitos comunes\n", num1,num2);
        }

    }else{
         printf("Digite un numero de dos digitos para ambos numeros");
    }

    return 0;
}