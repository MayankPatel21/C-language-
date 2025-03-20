#include <stdio.h>

int main() {
    char light;

    // Asking the user for input
    printf("Enter traffic light color (R for Red, Y for Yellow, G for Green): ");
    scanf(" %c", &light); // Space before %c to ignore newline from previous input

    // Checking the light color
    if (light == 'R' || light == 'r') {
        printf("STOP! The light is Red.\n");
    } else if (light == 'Y' || light == 'y') {
        printf("WAIT! The light is Yellow.\n");
    } else if (light == 'G' || light == 'g') {
        printf("GO! The light is Green.\n");
    } else {
        printf("Invalid input! Please enter R, Y, or G.\n");
    }

    return 0;
}
