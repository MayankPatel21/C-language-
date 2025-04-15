#include <stdio.h>

int main() {
    int speed;

    printf("Enter the vehicle speed (km/h): ");
    scanf("%d", &speed);

    if (speed <= 60) {
        printf("You're driving safely.\n");
    } else if (speed <= 80) {
        printf("Warning: You're speeding.\n");
    } else {
        printf("Over-speeding! Fine applicable.\n");
    }

    return 0;
}
