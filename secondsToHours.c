#include <stdio.h>

int main() {
    // Declaração de Variáveis
    int hours, minutes, seconds, aux;

    //Entrada de dados
    scanf("%d", &seconds);

    // Processamento
    hours = (seconds / 3600);
    aux = (seconds % 3600);
    minutes = (aux / 60);
    seconds = aux % 60;

    //Saida de Dados
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
