#include <stdio.h>

int main() {
    int celsius;
    float fahrenheit;

    // Input: Reading Celsius value
    scanf("%d", &celsius);

    // Conversion formula
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // Output: Displaying Fahrenheit value up to two decimal points
    printf("%.2f\n", fahrenheit);

    return 0;
}
