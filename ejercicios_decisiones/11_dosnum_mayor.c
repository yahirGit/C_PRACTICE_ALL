#include <stdio.h>

int main()
{
     //pd = primer digito 
    //ud  = ultimo digito
    int num_1,num_2;

    printf("\nPrograma num 11. Leer dos numeros enteros y determinar cual es el mayor.\n");
    printf("\n============\n");

    printf("\nDigite el numero uno entero: ");
    scanf("%d", &num_1);

    printf("\nDigite el numero dos entero: ");
    scanf("%d", &num_2);


    if(num_1 == num_2){
        printf("\nLos numeros son iguales");
    }else if (num_1 > num_2){
        printf("\nEl numero %d, es mayor ", num_1);
    }else{
            printf("\nEl numero %d, es mayor ", num_2);
    }
        

    return 0;
}