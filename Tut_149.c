#include <stdio.h>

int main() {
    int distance;
    printf("Enter distance to travel in km: ");
    scanf("%d", &distance);

    if (distance <= 5) {
        printf("Bus fare: ₹5\n");
    } else if (distance <= 15) {
        printf("Bus fare: ₹10\n");
    } else if (distance <= 30) {
        printf("Bus fare: ₹15\n");
    } else {
        printf("Bus fare: ₹20\n");
    }

    return 0;
}
