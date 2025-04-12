#include <stdio.h>

int main() {
    float amount, discount;

    printf("Enter your total bill amount: ");
    scanf("%f", &amount);

    if (amount >= 5000) {
        discount = amount * 0.20;
    } else if (amount >= 2000) {
        discount = amount * 0.10;
    } else if (amount >= 1000) {
        discount = amount * 0.05;
    } else {
        discount = 0;
    }

    printf("Discount: %.2f\n", discount);
    printf("Amount to pay: %.2f\n", amount - discount);

    return 0;
}
