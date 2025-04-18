#include <stdio.h>

int main() {
    int temperature;

    printf("Enter the current temperature (°C): ");
    scanf("%d", &temperature);

    if (temperature < 10) {
        printf("Wear a heavy jacket.\n");
    } else if (temperature >= 10 && temperature <= 20) {
        printf("Wear a sweater or hoodie.\n");
    } else if (temperature > 20 && temperature <= 30) {
        printf("Light clothes are fine.\n");
    } else {
        printf("Wear something very light and stay hydrated!\n");
    }

    return 0;
}
