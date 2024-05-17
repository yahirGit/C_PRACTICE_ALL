#include <stdio.h>

int main(){
    int num;

    printf("\nPrograma para determinar si el ultimo digito de un numero es 4\n");
    printf("\n============\n");

    printf("\nDigite un numero entero: ");
    scanf("%d",&num);

    int guardar = num;

    if (num < 0){
        num = num * (-1);
    }
    if (num == 0){
        printf("No tiene sentido saber si el numero %d termina en 4", num);
    }
    num = num - num / 10 * 10;

    if (num == 4){
        printf("El numero termina en 4\n");
    }else{
        printf("El numero no termina en 4\n");
    }

    printf("\nEl numero digitado hasta ahora es %d y su ultimo digito es %d \n", guardar, num);

    return 0;

}