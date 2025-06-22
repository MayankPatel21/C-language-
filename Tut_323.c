#include <stdio.h>

int main() {
    int speed;

    printf("Set fan speed (0 to 5): ");
    scanf("%d", &speed);

    switch(speed) {
        case 0: printf("Fan is OFF\n"); break;
        case 1: printf("Speed: Very Low\n"); break;
        case 2: printf("Speed: Low\n"); break;
        case 3: printf("Speed: Medium\n"); break;
        case 4: printf("Speed: High\n"); break;
        case 5: printf("Speed: Very High\n"); break;
        default: printf("Invalid speed level.\n");
    }

    return 0;
}
