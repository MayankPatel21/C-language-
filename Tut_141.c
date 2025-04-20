#include <stdio.h>

int main() {
    float amount, discount;

    printf("Enter the purchase amount: ");
    scanf("%f", &amount);

    if (amount >= 1000) {
        discount = amount * 0.20;
    } else if (amount >= 500) {
        discount = amount * 0.10;
    } else {
        discount = 0;
    }

    printf("Discount: %.2f\n", discount);
    printf("Final price to pay: %.2f\n", amount - discount);

    return 0;
}
