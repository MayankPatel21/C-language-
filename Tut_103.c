#include <stdio.h>

int main() {
    float temp;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temp);

    if (temp < 0) {
        printf("It's Freezing!\n");
    }
    else if (temp <= 15) {
        printf("It's Cold.\n");
    }
    else if (temp <= 30) {
        printf("It's Moderate.\n");
    }
    else {
        printf("It's Hot!\n");
    }

    return 0;
}
