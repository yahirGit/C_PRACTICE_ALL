#include <stdio.h>

int main(){
    int num;

    printf("\nPrograma para determinar si un numero entero tiene 3 digitos 4\n");
    printf("\n============\n");

    printf("\nDigite un numero entero: ");
    scanf("%d",&num);

    int guardar = num;

    if ( num < 0){
        num = num * (-1);
    }
    /*if (num == 0){
        printf("Pofavor digite un numero mayor que cero.");
    }*/
    if (num >= 0 && num <= 9){
        printf("El numero tiene un digito");
    }if (num >= 10 && num <= 99){
            printf("El numero tiene dos digito");
        }if (num >= 100 && num <= 999){
                printf("El numero tiene tres digitos");
            }else{
                printf("El numero tiene mas de tres digitos");
            }
        

    printf("\nEl numero digitado hasta ahora es %d \n", guardar);

    return 0;
}