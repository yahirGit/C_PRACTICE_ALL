#include <stdio.h>

int main()
{

    int num, pd, ud;

    printf("\nPrograma num 4. Que lee un numero entero de dos digitos y determina la suma de sus digitos.\n");
    printf("\n============\n");

    printf("\nDigite un numero entero de dos digitos: ");
    scanf("%d", &num);

    if (num < 0){
        num = num * (-1);
    }
    if (num >= 0 && num <= 9){
        printf("Digite un numero entero de dos digitos mayor que cero");
    }else{
            if (num >= 10 && num <= 99){
                pd = (num * 10) / 100;
                ud = num - num / 10 * 10;

                if (pd / 2 * 2 == pd && ud / 2 * 2 == ud){
                    printf("Ambos digitos del numero son pares");
                }else{
                    printf("El primero o el ultimo digito pueden ser pares pero ambos digitos no lo son.");
                }
                
            }
    }

    return 0;
}