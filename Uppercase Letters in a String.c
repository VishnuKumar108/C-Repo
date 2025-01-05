#include <stdio.h>
#include <ctype.h>

int count_uppercase_letters(const char *str) {
    int count = 0;

    // Traverse the string and count uppercase letters
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            count++;
        }
    }

    return count;
}

int main() {
    char s[10001]; // Allow strings up to 10^4 characters
    scanf("%[^\n]s", s); // Read the string including spaces

    int result = count_uppercase_letters(s);
    printf("%d\n", result);

    return 0;
}
