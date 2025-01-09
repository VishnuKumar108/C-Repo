#include <stdio.h>

int main() {
    int N, X;

    // Read the input values
    scanf("%d %d", &N, &X);

    // Calculate the remaining donations needed
    int remaining = N - X;

    // Output the result
    printf("%d\n", remaining);

    return 0;
}
