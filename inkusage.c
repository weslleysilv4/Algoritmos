#include <stdio.h>
#include <math.h>

int main()
{
    // Variables Declaration
    double  height,         // Height of area to paint
            radius,         // Radius of area to paint
            canPrice,       // Price of an can 
            totalArea,      // Var to set calc to area 
            totalPrice,     //
            totalUsage;     //
            
    int     canSize = 5,    //
            canLiter = 3;   //
    
    // Data Input
    printf("Por gentileza, insira a altura da Parede a ser pintada: ");
    scanf("%lf", &height); // Tank height
    
    printf("Por gentileza, insira o raio do tanque: ");
    scanf("%lf", &radius); // Tank Radius
    
    printf("Por gentileza, insira o preco da lata: ");
    scanf("%lf", &canPrice); // Can Price
    
    // Processing
    totalArea = 2 * M_PI * radius * (height + radius); // Calc to total Area of Cylinder
    totalUsage = totalArea / canLiter / canSize; // Calc to total ink usage
    totalPrice = totalUsage * canPrice; // Calc to total Price to paint
    
    // Output
    printf("Para um tanque de %.02lf metros de altura e %.02lf metros de raio \n", height, radius);
    printf("Considerando o preço de R$ %.02lf por lata de tinta\n\n\n", canPrice);
    printf("São necessárias %.02lf latas de tinta e o custo é de R$ %.02lf", totalUsage, totalPrice);
    
    return 0;
}

