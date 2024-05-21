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

    if (num < 0){
        num = -num;
    }
    if(num >=0 && num <10){

        printf("El numero que digito es %d debe ser mayor de dos digitos", num);

    }else if(num >=10 && num <=99){

        pd = (num * 10 ) /100;
        ud = num - num / 10 * 10;
        printf("El Primer digito es: %d el segundo digito es: %d\n", pd, ud);
        
        //Un numero no se puede dividir por 0 entonces se tiene que comprobar antes que el primer y ultimo digito no sean cero
        if (ud != 0 && pd % ud == 0){
            printf("El digito %d es multiplo del digito %d.\n", pd, ud);
        }else if (pd != 0 && ud % pd == 0){
            printf("El digito %d es multiplo del digito %d.\n", ud, pd);
        }else{
            printf("Ninguno es multiplo\n");
        }

    }else{
        printf("El numero es mayor de dos digitos");
    }

    return 0;
}