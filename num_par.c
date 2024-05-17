#include <stdio.h>

int main(){

    int num;
    printf("Digite un numero: \n");
    scanf("%d",&num);

    if(num<0){
        printf("El numero tiene que ser positivo");
    }

    if (num / 2 * 2 == num){
        printf("El numero es par %d\n", num);
    }else{
        printf("El numero no es par %d\n", num);
    }

    return 0;
}