#include <stdio.h>

int main()
{
     //pd = primer digito 
    //ud  = ultimo digito
    int num,pd,ud;

    printf("\nPrograma num 9. Leer un numero entero de dos dígitos y determinar si un digito es multiplo del otro.\n");
    printf("\n============\n");

    printf("\nDigite un numero entero de dos digitos: ");
    scanf("%d", &num);

    if(num < 0){
        num = num * (-1);
    }
    if (num > -10 && num < 10){
        printf("\nDigite un numero de dos digitos.");
    }else if(num >= 10 && num <= 99){
        pd = num / 10;
        ud = num % 10;

        if (pd != 0 && ud != 0 && pd == ud){
            printf("\nEl digito %d es igual al digito %d", pd, ud);
        }else{
            printf("\nEl digito %d NO es igual al digito %d", pd, ud);
        }
    }else{
        printf("\nDigito un numero mayor de dos digitos");

    }

    return 0;
}