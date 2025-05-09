#include <stdio.h>

int main() {
    float temp;
    printf("Enter your body temperature in Celsius: ");
    scanf("%f", &temp);

    if (temp < 36.1) {
        printf("You might have hypothermia.\n");
    } else if (temp >= 36.1 && temp <= 37.2) {
        printf("Normal body temperature.\n");
    } else {
        printf("You might have a fever.\n");
    }

    return 0;
}
