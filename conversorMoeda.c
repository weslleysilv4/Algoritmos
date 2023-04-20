#include <stdio.h>

int main()
{
    // Variable Declaration
    char    moeda;              // Variável para efetuar a escolha da moeda, caso D = Dólar, caso R = Reais
    double  valor,              // Valor a ser trabalhado
            cotacao,            // cotação atual do dolar
            valorConvertido;    // Valor convertido após operação
    
    // Data Input
    printf("Digite um valor: \n");
    scanf("%lf", &valor);       // Recebendo um valor X.
    
    printf("Escolha uma opção para converter \n");
    printf("(D)- Dólares para Reais \n");
    printf("(R)- Reais para Dólares \n");
    scanf("%s", &moeda);        // Escolha de Moeda a ser operada.
    
    // Processing
    if(moeda == 'D' || moeda == 'd'){                   // D = Dólares
        printf("Qual a cotação atual do dólar: \n");    // Solicitação da Cotação atual do Dólar
        scanf("%lf", &cotacao);
        valorConvertido = valor * cotacao;              // Operação matemática para conversão do valor D > R
        // Output
        printf("Para o valor de %.2lf dólares, com a cotação do dólar em %.2lf reais, valor em reais é %.2lf reais\n", valor, cotacao, valorConvertido);
    } else if (moeda == 'R' || moeda == 'r') {          // R = Reais
        printf("Qual a cotação atual do dólar: \n");    // Solicitação da Cotação atual do Dólar
        scanf("%lf", &cotacao);
        valorConvertido = valor / cotacao;              // Operação matemática para conversão do valor R > D
        // Output
        printf("Para o valor de %.2lf reais, com a cotação do dólar em %.2lf reais, valor em reais é %.2lf dólares\n", valor, cotacao, valorConvertido);
    } else {
        printf("Opção inválida. \n");                   // Caso o usuário insira um valor incorreto nas opções.
    }
    
    return 0;
}



