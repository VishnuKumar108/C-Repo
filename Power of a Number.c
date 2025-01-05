#include <stdio.h>

// Function to calculate (x^y) % M using modular exponentiation
int modular_exponentiation(int x, int y, int M) {
    int result = 1; // Initialize result
    x = x % M; // Update x to be within mod M

    while (y > 0) {
        // If y is odd, multiply x with the result
        if (y % 2 == 1) {
            result = (result * x) % M;
        }
        // Update y to y/2 and x to x^2
        y = y / 2;
        x = (x * x) % M;
    }

    return result;
}

int main() {
    int x, y, M;
   
  
    scanf("%d %d %d", &x, &y, &M);

    int result = modular_exponentiation(x, y, M);
    printf("%d\n", result);

    return 0;
}
