#include <stdio.h>

int main() {
    int temp;
    printf("Enter the temperature in Celsius: ");
    scanf("%d", &temp);

    if (temp >= 35) {
        printf("It's hot outside!\n");
    } else if (temp >= 20) {
        printf("Weather is warm.\n");
    } else {
        printf("It's cold today.\n");
    }

    return 0;
}
