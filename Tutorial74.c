#include <stdio.h>

int main() {
    float amount, discount, finalAmount;

    printf("Enter the total shopping amount: ");
    scanf("%f", &amount);

    if (amount >= 500) {
        discount = amount * 0.20; 
    } else if (amount >= 300) {
        discount = amount * 0.15; 
    } else if (amount >= 100) {
        discount = amount * 0.10; 
    } else {
        discount = 0; 
    }

    finalAmount = amount - discount;
    printf("Discount applied: $%.2f\n", discount);
    printf("Final amount to pay: $%.2f\n", finalAmount);

    return 0;
}
