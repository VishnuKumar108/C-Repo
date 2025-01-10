#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    // Check if the character is an uppercase alphabet
    if (ch >= 'A' && ch <= 'Z') {
        printf("uppercase alphabet\n");
    }
    // Check if the character is a lowercase alphabet
    else if (ch >= 'a' && ch <= 'z') {
        printf("lowercase alphabet\n");
    }
    // If neither, it's not an alphabet
    else {
        printf("not an alphabet\n");
    }

    return 0;
}
