#include <stdio.h>
#include <ctype.h>

int main() {
    // Declare a variable to store the character
    char ch;

    // Input the character
   
    scanf(" %c", &ch);

    // Convert the character to lowercase for easy comparison
    char lower = tolower(ch);

    // Check if the character is a vowel or consonant
    if ((lower >= 'a' && lower <= 'z')) {
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            printf("VOWEL\n");
        } else {
            printf("CONSONANT\n");
        }
    } else {
        printf("Invalid input. Please enter an alphabet.\n");
    }

    return 0;
}
