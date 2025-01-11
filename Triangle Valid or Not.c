#include <stdio.h>

int main() {
    // Declare variables to store the sides of the triangle
    int a, b, c;

    // Input the sides of the triangle
    printf("Enter the sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if the triangle is valid
    if (a > 0 && b > 0 && c > 0 && 
        (a + b > c) && 
        (a + c > b) && 
        (b + c > a)) {
        printf("Valid triangle\n");
    } else {
        printf("Invalid triangle\n");
    }

    return 0;
}
