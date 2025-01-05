#include <stdio.h>
#include <ctype.h>

int sum_of_digits_in_string(const char *str) {
    int sum = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            // Convert character digit to integer and add to sum
            sum += str[i] - '0';
        }
    }

    return sum;
}

int main() {
    char str[10001]; // Allow strings up to 10^4 characters
    printf("Enter the string: ");
    scanf("%s", str);

    int result = sum_of_digits_in_string(str);
    printf("Sum of all digits present in the string: %d\n", result);

    return 0;
}
