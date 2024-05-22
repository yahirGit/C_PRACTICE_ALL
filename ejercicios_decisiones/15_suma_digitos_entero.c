#include <stdio.h>


int main(){

    printf("\nPrograma num 15. Leer un numero entero de tres digitos y determinar a cuanto.\n");
    printf("\n============\n");

    //Declaramos variables
    //num1 = numero uno
    //num2 = numero dos
    int num, resultSuma, uDigito,dDigito,tDigito;

    printf("Digite el numero uno: ");
    //leer las variables y almacenar su valor
    scanf("%d",&num);
    
    if (num < 0){
        num = -num;
    }

    if ((num >= 100 && num <=999)){
        uDigito = num / 100;
        dDigito = (num % 100) / 10;
        tDigito = num % 10;

        resultSuma = uDigito + dDigito + tDigito;

        //printf("Los digitos son uno:%d dos:%d tres:%d\n",uDigito,dDigito,tDigito);
        printf("La suma de todos los digitos del numero: %d es la siguiente = %d\n",num,resultSuma);
        
    }else{
         printf("Digite un numero de tres digitos");
    }

    return 0;
}