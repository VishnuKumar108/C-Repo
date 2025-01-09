#include <stdio.h>

int main() {
    int R, C, E;

    // Read the input values
    scanf("%d %d %d", &R, &C, &E);

    // Calculate the total number of cells
    int totalRows = R + E;
    int totalCells = totalRows * C;

    // Output the result
    printf("%d\n", totalCells);

    return 0;
}
