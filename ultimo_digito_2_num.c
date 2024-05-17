#include <stdio.h>
#include <locale.h>

int main(){
    setlocale (LC_CTYPE, "spanish");

    int num1;
    int num2;
    int ud1,ud2;

    printf("Digite dos numeros enteros: \n");
    scanf("%d",&num1);
    scanf("%d",&num2);

    if(num1<0){
        num1 = num1 * (-1);
    }
    if(num2<0){
        num2 = num2 * (-1);
    }
    ud1 = num1 - num1 / 10 * 10;
    ud2 = num2 - num2 / 10 * 10;

    if (ud1 == ud2){
        printf("El ultimo digito del numero 1: %d es igual al ultimo digito del numero 2: %d",num1,num2);
    }else{
        printf("El ultimo digito del numero 1: %d no es igual al ultimo digito del numero 2: %d",num1,num2);
    }
    
    //printf("num1 es: %d\n",num1);
    //printf("num2 es: %d\n",num2);

    return 0;

}

