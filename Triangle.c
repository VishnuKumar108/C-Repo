#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // Check if the sides form a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        // Check if the triangle is equilateral
        if (a == b && b == c) {
            printf("Equilateral triangle\n");
        }
        // Check if the triangle is isosceles
        else if (a == b || a == c || b == c) {
            printf("Isosceles triangle\n");
        }
        // If neither, it's a scalene triangle
        else {
            printf("Scalene triangle\n");
        }
    } else {
        printf("Not a valid triangle\n");
    }

    return 0;
}
