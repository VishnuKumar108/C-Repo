#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Input the total number of seconds
    printf("Enter the total number of seconds: ");
    scanf("%d", &totalSeconds);

    // Check constraints
    if (totalSeconds < 1 || totalSeconds > 100000) {
        printf("Seconds should be between 1 and 100000.\n");
        return 1;
    }

    // Convert seconds to hours, minutes, and remaining seconds
    hours = totalSeconds / 3600;
    totalSeconds %= 3600; // Remaining seconds after extracting hours
    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    // Print the result
    printf("H:M:S-%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
