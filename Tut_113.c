#include <stdio.h>

int main() {
    int type;

    printf("Choose room type:\n1. Standard\n2. Deluxe\n3. Suite\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &type);

    if (type == 1) {
        printf("Standard Room: $100 per night\n");
    } else if (type == 2) {
        printf("Deluxe Room: $150 per night\n");
    } else if (type == 3) {
        printf("Suite: $250 per night\n");
    } else {
        printf("Invalid room type.\n");
    }

    return 0;
}
