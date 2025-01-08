#include <stdio.h>

int main() {
    int X, Y, H, total_charge;

    // Input: Read X (first hour charge), Y (extra hour charge), and H (total hours)
    scanf("%d %d %d", &X, &Y, &H);

    // Calculate total charges
    if (H == 1) {
        total_charge = X; // Only the first hour
    } else {
        total_charge = X + (H - 1) * Y; // First hour + extra hours
    }

    // Output the total charges
    printf("%d\n", total_charge);

    return 0;
}
