/******************************************************************************

Faça um algoritmo para o usuário entrar com dois números e exibir a saída de acordo com as seguintes
condições:
 Caso a soma dos dois números seja um número par maior que 100, exibir a metade da soma dos dois
números;
 Caso a soma dos dois números seja um número par menor que 100, exibir a soma multiplicada por
dois;
 Caso a soma dos dois números resultar em um número ímpar, exibir apenas a soma. 

Casos de teste:
a) Para os números 55 e 63, será apresentado o número 59;
b) Para os números 31 e 13, será apresentado o número 88;
c) Para os números 55 e 70, será apresentado o número 125;
d) Para os números 27 e 10, será apresentado o número 37. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    // Variable Declaration
    
    int x, y;
    
    // Data input
    printf("Digite um número: \n");
    scanf("%d", &x);
    
    printf("Digite outro número: \n");
    scanf("%d", &y);
    
    
    //Processing
    if((x + y) % 2 == 0 && (x + y) > 100) {
        printf("%d", (x + y) / 2);          // Output
    } else {
        if ((x + y) % 2 == 0 && (x + y) < 100) {
            printf("%d", (x + y) * 2);      // Output
        } else {
            printf("%d", x + y);            // Output
        }
    }
    return 0;
}

