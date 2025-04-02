#include <stdio.h>

int main() {
    int choice;
    float temp, converted;

    printf("Enter 1 for Celsius to Fahrenheit, 2 for Fahrenheit to Celsius: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        converted = (temp * 9/5) + 32;
        printf("Temperature in Fahrenheit: %.2f°F\n", converted);
    } 
    else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        converted = (temp - 32) * 5/9;
        printf("Temperature in Celsius: %.2f°C\n", converted);
    } 
    else {
        printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}
