#include <stdio.h>

int main() {
    float temp;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temp);

    if (temp < 0) {
        printf("Freezing cold!\n");
    } else if (temp <= 20) {
        printf("Cold weather.\n");
    } else if (temp <= 30) {
        printf("Pleasant weather.\n");
    } else {
        printf("It's hot!\n");
    }

    return 0;
}
