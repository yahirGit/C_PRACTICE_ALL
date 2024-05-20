#include <stdio.h>

int main()
{

    int num;

    printf("\nPrograma num 7. Leer un numero entero de dos dígitos y determinar si es primo y además si es negativo.\n");
    printf("\n============\n");

    printf("\nDigite un numero entero de dos digitos: ");
    scanf("%d", &num);

    if (num < -99 || (num > -10 && num < 10) || num > 99){
        printf("El numero %d no es un numero de dos digitos.\n", num);
    }else{
        if (num < 0){
            printf("El numero %d es negativo.\n", num);
        }
        else{
            printf("El numero %d NO es negativo.\n", num);
        }

        int absNum = num < 0 ? -num : num;

        if (absNum == 11 || absNum == 13 || absNum == 17 || absNum == 19 ||
            absNum == 23 || absNum == 29 || absNum == 31 || absNum == 37 ||
            absNum == 41 || absNum == 43 || absNum == 47 || absNum == 53 ||
            absNum == 59 || absNum == 61 || absNum == 67 || absNum == 71 ||
            absNum == 73 || absNum == 79 || absNum == 83 || absNum == 89 ||
            absNum == 97){
            printf("El numero %d es primo.\n", num);
        }
        else{
            printf("El numero %d no es primo.\n", num);
        }
    }

    return 0;
}