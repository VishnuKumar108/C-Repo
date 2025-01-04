#include <stdio.h>

int main() {
    int year;
    
    // Read the input year
    scanf("%d", &year);
    
    // Get the last two digits by applying modulus 100
    int last_two_digits = year % 100;
    
    // Print the last two digits
    printf("%02d\n", last_two_digits);  // %02d ensures the output has 2 digits, even if it's a single digit (e.g., 02)
    
    return 0;
}
