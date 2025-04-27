#include <stdio.h>

int main() {
    int pin;
    printf("Enter your ATM PIN: ");
    scanf("%d", &pin);

    if (pin == 1234) {
        printf("PIN correct. Access granted.\n");
    } else {
        printf("Incorrect PIN. Access denied.\n");
    }

    return 0;
}
