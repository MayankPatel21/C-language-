#include <stdio.h>

int main() {
    float temp;
    printf("Enter your body temperature in Celsius: ");
    scanf("%f", &temp);

    if (temp >= 36.5 && temp <= 37.5) {
        printf("Normal body temperature.\n");
    } else if (temp > 37.5) {
        printf("You may have a fever.\n");
    } else {
        printf("Body temperature is below normal.\n");
    }

    return 0;
}
