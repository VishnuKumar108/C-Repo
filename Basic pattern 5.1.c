#include <stdio.h>

int main() {
    int N;
    
    // Read the input value
    scanf("%d", &N);
    
    // Loop through numbers from 1 to N
    for (int i = 1; i <= N; i++) {
        // Print the number i, i times
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        
        // Print the stars, (N-i) times
        for (int k = 1; k <= (N - i); k++) {
            printf("*");
        }
        
        // Print a newline after each line
        printf("\n");
    }

    return 0;
}
