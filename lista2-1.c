/******************************************************************************

. Elabore um algoritmo para identificar se um número inteiro fornecido pelo usuário é positivo ou negativo
(considere zero como positivo)

*******************************************************************************/
#include <stdio.h>

int main()
{
    // Variable Declaration
    int n;
    // Data Input
    printf("Digite o valor a ser verificado: \n");
    scanf("%d", &n);
    // Processing / Output
    if(n >= 0 ) {
        printf("O número %d é positivo", n);
    } else {
        printf("O número %d é negativo", n);
    }
    return 0;
}

