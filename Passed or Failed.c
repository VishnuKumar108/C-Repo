#include <stdio.h>

int main() {
    // Declare variables to store marks of 5 subjects
    int english, maths, physics, chemistry, computer;

    // Input the marks of 5 subjects
    printf("Enter marks of 5 subjects (English, Maths, Physics, Chemistry, Computer Science): ");
    scanf("%d %d %d %d %d", &english, &maths, &physics, &chemistry, &computer);

    // Check if the student is PASSED or FAILED
    if (english > 34 && maths > 34 && physics > 34 && chemistry > 34 && computer > 34) {
        printf("PASSED\n");
    } else {
        printf("FAILED\n");
    }

    return 0;
}
