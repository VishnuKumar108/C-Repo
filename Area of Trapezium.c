#include <stdio.h>

int main() {
    float base1, base2, height, area;

    // Read the inputs for the base1, base2 and height
    scanf("%f", &base1);
    scanf("%f", &base2);
    scanf("%f", &height);
    
    // Calculate the area of the trapezium
    area = ((base1 + base2) * height) / 2;
    
    // Print the area rounded to 4 decimal places
    printf("%.4f\n", area);
    
    return 0;
}
