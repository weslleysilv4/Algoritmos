#include <stdio.h>
 
int main() {
 
 float tempo, vMedia, litros;
    scanf("%f %f", &tempo, &vMedia);
    printf("%.3f\n", (vMedia / 12) * tempo);
    return 0;
}