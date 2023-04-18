#include <stdio.h>

int main()
{
    int X, day, month, year;
    scanf("%d", &X);
    
    year = X / 365;
    month = (X % 365)/30;
    day = (X % 365) % 30;
    printf("%d ano(s)\n", year);
    printf("%d mes(es)\n", month);
    printf("%d dia(s)\n", day);
    return 0;
}
