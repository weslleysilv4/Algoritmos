#include <stdio.h>
 
int main() {
 
    int X;
    double gastoMedio, Y;
    scanf("%d %lf", &X, &Y);
    
    gastoMedio = X/Y;
    
    printf("%.3lf km/l\n", gastoMedio);
     
    return 0;
}