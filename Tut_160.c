#include <stdio.h>

int main() {
    int speed;
    printf("Enter the speed of the vehicle (km/h): ");
    scanf("%d", &speed);

    if (speed <= 60) {
        printf("Speed is normal.\n");
    } else if (speed <= 100) {
        printf("Warning: Drive carefully!\n");
    } else {
        printf("Over Speeding! Fine will be imposed.\n");
    }

    return 0;
}
