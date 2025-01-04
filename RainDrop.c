#include <stdio.h>
#include <string.h>  // Include string.h for strcat function

int main() {
    int N;
    scanf("%d", &N);  // Read input
    
    // Initialize an empty result string with enough space to hold the output
    char result[100] = "";
    
    // Check divisibility and append corresponding sounds
    if (N % 3 == 0) {
        strcat(result, "Pling");
    }
    if (N % 5 == 0) {
        strcat(result, "Plang");
    }
    if (N % 7 == 0) {
        strcat(result, "Plong");
    }
    
    // If no sounds were added, print the number itself
    if (result[0] == '\0') {
        printf("%d\n", N);
    } else {
        printf("%s\n", result);
    }

    return 0;
}
