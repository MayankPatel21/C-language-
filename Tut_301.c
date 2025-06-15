#include <stdio.h>

int main() {
    float temp;
    char unit;

    printf("Enter temperature value: ");
    scanf("%f", &temp);

    printf("Convert to (C/F): ");
    scanf(" %c", &unit);

    switch(unit) {
        case 'C':
        case 'c':
            printf("Temperature in Celsius: %.2f°C\n", (temp - 32) * 5 / 9);
            break;
        case 'F':
        case 'f':
            printf("Temperature in Fahrenheit: %.2f°F\n", (temp * 9 / 5) + 32);
            break;
        default:
            printf("Invalid unit.\n");
    }

    return 0;
}
