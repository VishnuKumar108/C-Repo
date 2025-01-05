#include <stdio.h>

int main() {
    int minutes, hours, remainingMinutes;

    // Input the number of minutes
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    // Check constraints
    if (minutes < 1 || minutes > 100000) {
        printf("Minutes should be between 1 and 100000.\n");
        return 1;
    }

    // Convert minutes to hours and remaining minutes
    hours = minutes / 60;
    remainingMinutes = minutes % 60;

    // Print the result
    printf("%d Hour(s) %d Minute(s)\n", hours, remainingMinutes);

    return 0;
}
