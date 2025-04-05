#include <stdio.h>

int main() {
    int quantity;
    float unitPrice = 20.0, total, discount = 0, finalPrice;
    
    printf("Enter the quantity purchased: ");
    scanf("%d", &quantity);
    
    total = quantity * unitPrice;
    
    if (quantity < 10) {
        discount = 0;
    }
    else if (quantity <= 20) {
        discount = total * 0.05;
    }
    else if (quantity <= 50) {
        discount = total * 0.10;
    }
    else {
        discount = total * 0.15;
    }
    
    finalPrice = total - discount;
    printf("Total price after discount: $%.2f\n", finalPrice);
    
    return 0;
}
