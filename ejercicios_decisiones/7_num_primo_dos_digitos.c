#include <stdio.h>

int main()
{

    int num;
    

    printf("\nPrograma num 7. Leer un numero entero de dos dígitos y determinar si es primo y además si es negativo.\n");
    printf("\n============\n");

    printf("\nDigite un numero entero de dos digitos: ");
    scanf("%d", &num);


    if (num >= -9 && num <= 9){
        printf("\nDigito el numero %d, NO es un numero de dos digitos.", num);
    }else if (num <= -10 && num >=-99){
        
        if (num == -11 || num == -13 || num == -17 || num == -19 || num == -23 || num == -29 || 
            num == -31 || num == -37 || num == -41 || num == -43 || num == -47 || 
            num == -53 || num == -59 || num == -61 || num == -67 || num == -71 || 
            num == -73 || num == -79 || num == -83 || num == -89 || num == -97){

                    printf("El numero es primo y ademas es negativo");

               }else{
                    printf("El numero NO es primo pero si es negativo.");
               }
    }else if (num >=10 && num <=99){

            if (num == 11 || num == 13 || num == 17 || num == 19 || num == 23 || num == 29 || 
                num == 31 || num == 37 || num == 41 || num == 43 || num == 47 || 
                num == 53 || num == 59 || num == 61 || num == 67 || num == 71 || 
                num == 73 || num == 79 || num == 83 || num == 89 || num == 97) {

                    printf("El numero es primo");

                }else{

                    printf("El numero NO es primo");

                }
    }else{
        printf("El numero es mayor de dos digitos");
    }
        
    return 0;
}