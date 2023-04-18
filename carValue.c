#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    // Declaração de Variáveis
    double  fPrice,
            profit,
            tIpi,
            tIcms,
            sellPrice;

    //Entrada de dados
    scanf("%lf", &fPrice);

    // Processamento
    profit = (fPrice * 0.15);
    tIpi = (fPrice * 0.11);
    tIcms = (fPrice * 0.17);
    sellPrice = (fPrice + profit + tIpi + tIcms);

    //Saida de Dados
    printf("Para o preco da montadora igual a R$ %.2lf, o preco de venda e R$ %.2lf, "
           "o lucro e R$ %.2lf, o IPI e R$ %.2lf e o ICMS e R$ %.2lf\n", fPrice, sellPrice, profit, tIpi, tIcms);

    return 0;
}


