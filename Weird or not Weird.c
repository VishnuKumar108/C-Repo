#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Check the conditions and print the result
    if (n % 2 != 0) {
        printf("Weird\n"); // n is odd
    } else if (n >= 2 && n <= 5) {
        printf("Not Weird\n"); // n is even and in the range [2, 5]
    } else if (n >= 6 && n <= 20) {
        printf("Weird\n"); // n is even and in the range [6, 20]
    } else if (n > 20) {
        printf("Not Weird\n"); // n is even and greater than 20
    }

    return 0;
}
