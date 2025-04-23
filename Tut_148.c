#include <stdio.h>

int main() {
    float temp;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temp);

    if (temp < 0) {
        printf("It's freezing cold!\n");
    } else if (temp >= 0 && temp <= 20) {
        printf("It's a bit chilly.\n");
    } else if (temp > 20 && temp <= 35) {
        printf("Weather is pleasant.\n");
    } else {
        printf("It's too hot!\n");
    }

    return 0;
}
