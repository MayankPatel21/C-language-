#include <stdio.h>

int main() {
    float fuel;
    printf("Enter remaining fuel in liters: ");
    scanf("%f", &fuel);

    if (fuel < 1.0) {
        printf("Warning: Low fuel! Please refuel soon.\n");
    } else {
        printf("Fuel level is sufficient.\n");
    }

    return 0;
}
