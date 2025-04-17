#include <stdio.h>

int main() {
    float fuel;

    printf("Enter current fuel level in liters: ");
    scanf("%f", &fuel);

    if (fuel > 25) {
        printf("Fuel level is full.\n");
    } else if (fuel > 10) {
        printf("Fuel level is moderate.\n");
    } else if (fuel > 0) {
        printf("Warning! Low fuel level.\n");
    } else {
        printf("Invalid input or empty tank.\n");
    }

    return 0;
}
