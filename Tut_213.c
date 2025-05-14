#include <stdio.h>

int main() {
    int speed;
    printf("Enter your speed (in km/h): ");
    scanf("%d", &speed);

    if (speed <= 60) {
        printf("Safe driving. No fine.\n");
    } else if (speed <= 80) {
        printf("Warning: You are overspeeding. Fine = ₹500\n");
    } else {
        printf("Dangerous speed! Fine = ₹1000\n");
    }

    return 0;
}
