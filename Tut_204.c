#include <stdio.h>

int main() {
    float temp;
    char choice;

    printf("Enter temperature: ");
    scanf("%f", &temp);
    printf("Convert to (C for Celsius, F for Fahrenheit): ");
    scanf(" %c", &choice);

    if (choice == 'C' || choice == 'c') {
        printf("Temperature in Celsius: %.2f\n", (temp - 32) * 5 / 9);
    } else if (choice == 'F' || choice == 'f') {
        printf("Temperature in Fahrenheit: %.2f\n", (temp * 9 / 5) + 32);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
