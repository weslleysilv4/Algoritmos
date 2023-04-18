#include <stdio.h>
#include <math.h>
 
int main() {
 
    int codigoPecas1, numeroPecas1, codigoPecas2, numeroPecas2;
    float valorUnitario1, valorUnitario2, total;
    scanf("%d %d %f %d %d %f", &codigoPecas1, &numeroPecas1, &valorUnitario1,
    &codigoPecas2, &numeroPecas2, &valorUnitario2);
    total = (numeroPecas1 * valorUnitario1) + (numeroPecas2 * valorUnitario2);
    
    printf("VALOR A PAGAR: R$ %.2f\n", total);
    
    return 0;
}