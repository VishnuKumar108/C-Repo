#include <stdio.h>

int main() {
    int units;
    float bill, surcharge;

    // Input: units consumed
    scanf("%d", &units);

    // Calculate bill based on the units consumed
    if (units <= 199) {
        bill = units * 1.20;
    } else if (units >= 200 && units < 400) {
        bill = units * 1.50;
    } else if (units >= 400 && units < 600) {
        bill = units * 1.80;
    } else {
        bill = units * 2.00;
    }

    // Add surcharge based on the total bill
    if (bill > 400) {
        surcharge = bill * 0.15; // 15% surcharge for bills above 400
        bill += surcharge;
    } else {
        bill += 100; // Minimum surcharge of 100 for bills less than or equal to 400
    }

    // Output the final bill
    printf("%.2f\n", bill);

    return 0;
}
