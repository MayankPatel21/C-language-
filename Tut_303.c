#include <stdio.h>

int main() {
    int choice;
    float inr;

    printf("Enter amount in INR: ");
    scanf("%f", &inr);

    printf("Convert to:\n1. USD\n2. EUR\n3. GBP\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("USD: %.2f\n", inr * 0.012); // Example rate
            break;
        case 2:
            printf("EUR: %.2f\n", inr * 0.011); // Example rate
            break;
        case 3:
            printf("GBP: %.2f\n", inr * 0.0098); // Example rate
            break;
        default:
            printf("Invalid option.\n");
    }

    return 0;
}
