#include <stdio.h>

int main()
{
    double input_Notas;
    int n100, n50, n20, n10, n5, n2, m1, m05, m025, m010, m005, m001, aux_valor;
    
    scanf("%lf", &input_Notas);
    aux_valor = input_Notas * 100;
    
    n100 = aux_valor / 10000;
    aux_valor = aux_valor % 10000;
    n50 = aux_valor / 5000;
    aux_valor = aux_valor % 5000;
    n20 = aux_valor / 2000;
    aux_valor = aux_valor % 2000;
    n10 = aux_valor / 1000;
    aux_valor = aux_valor % 1000;
    n5 = aux_valor / 500;
    aux_valor = aux_valor % 500;
    n2 = aux_valor / 200;
    aux_valor = aux_valor % 200;
    
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    
    m1 = aux_valor / 100;
    aux_valor = aux_valor % 100;
    m05 = aux_valor / 50;
    aux_valor = aux_valor % 50;
    m025 = aux_valor / 25;
    aux_valor = aux_valor % 25;
    m010 = aux_valor / 10;
    aux_valor = aux_valor % 10;
    m005 = aux_valor / 5;
    aux_valor = aux_valor % 5;
    m001 = aux_valor / 1;
    
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n", m1);
    printf("%d moeda(s) de R$ 0.50\n", m05);
    printf("%d moeda(s) de R$ 0.25\n", m025);
    printf("%d moeda(s) de R$ 0.10\n", m010);
    printf("%d moeda(s) de R$ 0.05\n", m005);
    printf("%d moeda(s) de R$ 0.01\n", m001);
    
    return 0;
}
