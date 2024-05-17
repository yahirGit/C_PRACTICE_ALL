#include <stdio.h>

int main(){
    int num;

    printf("\nPrograma para determinar si un numero es negativo 4\n");
    printf("\n============\n");

    printf("\nDigite un numero entero: ");
    scanf("%d",&num);

    if (num < 0 ){
        printf("El numero es negativo");
    }
    if (num == 0)
    {
        printf("El numero es neutro");
    }
    if (num > 0)
    {
        printf("El numero es positivo");
    }
    
    printf("\nEl numero digitado hasta ahora es %d \n", num);

    return 0;
}