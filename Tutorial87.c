#include <stdio.h>

int main() {
    float amount, discount, final_price;

    printf("Enter total purchase amount: ");
    scanf("%f", &amount);

    if (amount <= 100) {
        discount = 0;
    } 
    else if (amount <= 500) {
        discount = amount * 0.10;
    } 
    else if (amount <= 1000) {
        discount = amount * 0.20;
    } 
    else {
        discount = amount * 0.30;
    }

    final_price = amount - discount;
    printf("Final Price After Discount: $%.2f\n", final_price);

    return 0;
}
