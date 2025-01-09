#include <stdio.h>

int main() {
    char ch;

    // Read the input character
    scanf("%c", &ch);

    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("VOWEL\n");
    } else {
        // Otherwise, it is a consonant
        printf("CONSONANT\n");
    }

    return 0;
}
