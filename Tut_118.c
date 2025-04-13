#include <stdio.h>

int main() {
    char light;

    printf("Enter traffic light color (R/Y/G): ");
    scanf(" %c", &light);

    if (light == 'R' || light == 'r') {
        printf("Stop! The light is Red.\n");
    } else if (light == 'Y' || light == 'y') {
        printf("Get ready! The light is Yellow.\n");
    } else if (light == 'G' || light == 'g') {
        printf("Go! The light is Green.\n");
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}
