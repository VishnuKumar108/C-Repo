#include <stdio.h>

int main() {
    char S[11]; // Array to hold a string of length 10 plus null terminator
    scanf("%s", S);

    // Print the 7th character (index 6 in 0-based indexing)
    printf("%c\n", S[6]);

    return 0;
}
