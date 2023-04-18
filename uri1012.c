#include <stdio.h>
 
int main() {
 
    double A, B, C;
    float triangulo, circulo, trapezio, quadrado, retangulo;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    
    triangulo = (A * C) / 2;
    circulo = C * C * 3.14159;
    trapezio = ((A + B) * C) / 2;
    quadrado = B * B;
    retangulo = A * B;
    
    printf("TRIANGULO: %.3lf\n", triangulo);
    printf("CIRCULO: %.3lf\n", circulo);
    printf("TRAPEZIO: %.3lf\n", trapezio);
    printf("QUADRADO: %.3lf\n", quadrado);
    printf("RETANGULO: %.3lf\n", retangulo);
 
    return 0;
}