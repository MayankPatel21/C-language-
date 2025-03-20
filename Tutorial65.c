#include <stdio.h>

int main() {
    float temperature;

    // Asking the user for input
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temperature);

    // Checking temperature range
    if (temperature >= 30) {
        printf("It's HOT outside!\n");
    } else if (temperature >= 20 && temperature < 30) {
        printf("The weather is WARM.\n");
    } else if (temperature >= 10 && temperature < 20) {
        printf("It's COOL outside.\n");
    } else {
        printf("It's COLD! Stay warm.\n");
    }

    return 0;
}
