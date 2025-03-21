#include <stdio.h>

int main() {
    int pin, attempt = 0;
    int correctPin = 1234; // Predefined PIN

    // Allow up to 3 attempts
    while (attempt < 3) {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &pin);

        if (pin == correctPin) {
            printf("Access Granted.\n");
            return 0; // Exit the program if PIN is correct
        } else {
            printf("Incorrect PIN. Try Again.\n");
        }

        attempt++; // Increase attempt count
    }

    // If all 3 attempts fail
    printf("Account Locked. Too many incorrect attempts.\n");

    return 0;
}
