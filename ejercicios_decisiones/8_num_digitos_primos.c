#include <stdio.h>

int main()
{
    //pd = primer digito 
    //ud  = ultimo digito
    int num,pd,ud;

    printf("\nPrograma num 8. Leer un numero entero de dos dígitos y si sus digitos son primos.\n");
    printf("\n============\n");

    printf("\nDigite un numero entero de dos digitos: ");
    scanf("%d", &num);

    if (num < 0){
        num = -num;
    }
    if(num >=0 && num <10){
        printf("El numero que digito es %d debe ser mayor de dos digitos", num);        
    }else if(num >=10 && num <=99){
        pd = (num * 10 ) /100;
        ud = num - num / 10 * 10;
        //printf("El Primer digito es. %d elsegundo es %d", pd, ud);

       if ((pd == 2 || pd == 3 || pd == 5 || pd == 7)  && (ud == 2 || ud == 3 || ud == 5 || ud == 7) ) {

                printf("Ambos digitos son primos.");

               }else{
                printf("Ambos digitos NO son primos.");

               }
        
    }else{
        printf("El numero es mayor de dos digitos");
    }

    return 0;
}
