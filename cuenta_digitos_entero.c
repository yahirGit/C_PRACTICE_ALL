#include <stdio.h>

int main(){
    int num;
    int contador = 0;

    printf("\n");
    printf("Digite un numero entero: ");
    
    scanf("%d",&num);

    int numDigitado = num;

    while (num != 0)
    {
        num = num / 10;
        contador = contador + 1; 
    }
    printf("El numero de digitos que tiene el numero digitado: %d es: %d digitos", numDigitado, contador);
}