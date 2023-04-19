/******************************************************************************

2. Elabore um algoritmo para identificar se um número inteiro fornecido pelo usuário é zero, positivo ou
negativo.

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
    if(n > 0 ) {
        printf("O número %d é positivo", n);
    } else {
        if(n == 0){
            printf("O número %d é zero", n);    
        } else {
            printf("O número %d é negativo", n);
        }
    }
    return 0;
}

