#include <stdio.h>

int main() {
    // Declare variables to store the numbers
    int num1, num2, num3;

    // Input the three numbers
    scanf("%d %d %d", &num1, &num2, &num3);

    // Determine the largest number
    int largest;
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    // Output the largest number
    printf("%d\n", largest);

    return 0;
}
