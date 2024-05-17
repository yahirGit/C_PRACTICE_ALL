#include <stdio.h>

int main()
{

    int num, pd, ud, result_sum;

    printf("\nPrograma num 4. Que lee un numero entero de dos digitos y determina la suma de sus digitos.\n");
    printf("\n============\n");

    printf("\nDigite un numero entero de dos digitos: ");
    scanf("%d", &num);

    if (num < 0){
        num = num * (-1);
    }
    if (num >= 0 && num <= 9){
        printf("El numero que digito es %d debe ser de dos digitos\n", num);
    }else{
        if (num >= 10 && num <= 99){

            pd = (num * 10) / 100;
            ud = num - num / 10 * 10;

            result_sum = pd + ud;

            printf("La suma del primer digito y el segundo digito es: %d", result_sum);
        }else{
            printf("El numero que digito %d es mayor de dos digitos.", num);
        }
    }
    return 0;
}