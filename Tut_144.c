#include <stdio.h>

int main() {
    char light;
    printf("Enter traffic light color (R/G/Y): ");
    scanf(" %c", &light);

    if (light == 'R' || light == 'r') {
        printf("Stop!\n");
    } else if (light == 'Y' || light == 'y') {
        printf("Get Ready!\n");
    } else if (light == 'G' || light == 'g') {
        printf("Go!\n");
    } else {
        printf("Invalid color input.\n");
    }

    return 0;
}
