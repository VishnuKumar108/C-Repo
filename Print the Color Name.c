#include <stdio.h>
#include <ctype.h>

int main() {
    char color_code;
    scanf(" %c", &color_code);

    // Convert the input to uppercase to make it case-insensitive
    color_code = toupper(color_code);

    // Check the color code and print the corresponding color name
    switch (color_code) {
        case 'V':
            printf("Violet\n");
            break;
        case 'I':
            printf("Indigo\n");
            break;
        case 'B':
            printf("Blue\n");
            break;
        case 'G':
            printf("Green\n");
            break;
        case 'Y':
            printf("Yellow\n");
            break;
        case 'O':
            printf("Orange\n");
            break;
        case 'R':
            printf("Red\n");
            break;
        default:
            printf("-1\n");
    }

    return 0;
}
