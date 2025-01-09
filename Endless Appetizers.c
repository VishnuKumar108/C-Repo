#include <stdio.h>

int main() {
    int X, Y, R;

    // Read the input values
    scanf("%d %d %d", &X, &Y, &R);

    // Calculate the total number of sticks eaten
    int extra_sticks = R / 30;  // Each extra stick gives 30 rupees
    int total_sticks = X + extra_sticks;

    // Calculate the number of plates required
    int plates = total_sticks / Y;   // Full plates
    if (total_sticks % Y != 0) {
        plates += 1;  // Add one more plate for remaining sticks
    }

    // Print the result
    printf("%d\n", plates);

    return 0;
}
