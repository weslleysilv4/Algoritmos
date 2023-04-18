#include <stdio.h>
int main()
{
    int segundos, hora, minuto;
    
    scanf("%d", &segundos);
    hora = segundos / 3600;
    segundos = segundos - (hora * 3600);
    minuto = segundos / 60;
    segundos = segundos - (minuto * 60);
    
    printf("%d:%d:%d\n", hora, minuto, segundos);
    
}
