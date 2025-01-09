#include <stdio.h>

int main() {
    int N;

    // Read the input value for N
    scanf("%d", &N);

    // Loop to print each row
    for (int i = N; i >= 1; i--) {
        // Print the number 'i' (N - i + 1) times
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }

        // Print '*' (N - i) times
        for (int j = 1; j <= N - i; j++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
