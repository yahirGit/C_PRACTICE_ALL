#include <stdio.h>

int main()
{

    int num;
    

    printf("\nPrograma num 6. Leer un numero entero de dos digitos menor que 20 y determinar si es primo.\n");
    printf("\n============\n");

    printf("\nDigite un numero entero de dos digitos menor que 20: ");
    scanf("%d", &num);

    if (num < 0){
        num = num * (-1);
    }
    if (num >=0 && num<= 9){
        printf("\n El numero que digito es: %d tiene que ser de dos digitos menor que 20.", num);
    }if (num >=10 && num <20){

        if (num == 11 || num == 13 || num == 17 || num ==19){
            printf("El numero es primo");
        }else{
            printf("El numero no es primo");
        }
        
    }else if(num >=20){
        printf("Su numero es: %d tiene que ser menor que 20", num);
    }

 return 0;
}