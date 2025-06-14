#include <stdio.h>

int main() {
    char light;

    printf("Enter traffic light color (R/G/Y): ");
    scanf(" %c", &light);

    switch(light) {
        case 'R':
        case 'r':
            printf("Stop!\n");
            break;
        case 'G':
        case 'g':
            printf("Go!\n");
            break;
        case 'Y':
        case 'y':
            printf("Wait!\n");
            break;
        default:
            printf("Invalid color input.\n");
    }

    return 0;
}
