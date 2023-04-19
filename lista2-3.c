#include <stdio.h>

int main()
{
    // Variable Declaration
    int A, B, C; // Sides of triangle
    
    // Data Input
    printf("Digite o valor do lado A\n");
    scanf("%d", &A);
    printf("Digite o valor do lado B\n");
    scanf("%d", &B);
    printf("Digite o valor do lado C\n");
    scanf("%d", &C);
    
    // Processing / Output
    if(A < B + C && B < A +C && C < A +B ) {
        printf("É um triângulo \n");
    } else {
        printf("Não é um triângulo \n");
    }
    
    return 0;
}

