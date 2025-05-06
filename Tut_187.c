#include <stdio.h>

int main() {
    int pin;
    printf("Enter your 4-digit ATM PIN: ");
    scanf("%d", &pin);

    if (pin == 1234) {
        printf("PIN verified. Access granted.\n");
    } else {
        printf("Incorrect PIN. Access denied.\n");
    }

    return 0;
}
