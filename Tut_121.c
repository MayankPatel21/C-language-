#include <stdio.h>

int main() {
    float temp;

    printf("Enter the current temperature (°C): ");
    scanf("%f", &temp);

    if (temp < 0) {
        printf("It's freezing cold!\n");
    } else if (temp >= 0 && temp < 20) {
        printf("It's cold outside.\n");
    } else if (temp >= 20 && temp <= 30) {
        printf("The weather is pleasant.\n");
    } else {
        printf("It's very hot!\n");
    }

    return 0;
}
