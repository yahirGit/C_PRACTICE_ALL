#include <stdio.h>

int main()
{

    float num;
    

    printf("\nPrograma num 6. Que lee un numero entero de dos digitos menor que 20 y determinar si es primo.\n");
    printf("\n============\n");

    printf("\nDigite un numero entero de dos digitos menor que 20: ");
    scanf("%f", &num);

    if (num<0){
        num = num * (-1);
    }if (num >= 0 && num <=9){
        printf("El numero que digito es: %f NO es un numero de dos digitos menor que 20", num);
    }if (num >= 10 && num < 20){
        
        if((num / 11 ) == 0 || num / 13 == 0 || num / 17 == 0 || num / 19 == 0 ){
            
            printf("El numero que digito es PRIMO");

        }else if(num / 11 == 1 || num / 13 == 1 || num / 17 == 1 || num / 19 == 1){
            printf("El numero que digito es PRIMO");

        }else{
            printf("El numero que digito es NO PRIMO");

        }
            
        }else{
        printf("El numero que digito es mayor que 20");
    }
    

    return 0;
}