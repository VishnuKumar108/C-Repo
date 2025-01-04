#include<stdio.h>

int main() 
{
    int X, Y, Z;
    
    // Read input values
    scanf("%d", &X);  // Number of 5 rupee coins
    scanf("%d", &Y);  // Number of 10 rupee coins
    scanf("%d", &Z);  // Cost of each chocolate
    
    // Calculate total money available
    int totalMoney = 5 * X + 10 * Y;
    
    // Calculate the maximum number of chocolates that can be bought
    int maxChocolates = totalMoney / Z;
    
    // Output the result
    printf("%d\n", maxChocolates);
}