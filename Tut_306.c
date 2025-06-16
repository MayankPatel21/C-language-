#include <stdio.h>

int main() {
    int choice;
    int qty;
    float total;

    printf("Hotel Menu:\n");
    printf("1. Pizza (Rs. 150)\n2. Burger (Rs. 100)\n3. Dosa (Rs. 80)\n4. Idli (Rs. 50)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter quantity: ");
    scanf("%d", &qty);

    switch(choice) {
        case 1:
            total = qty * 150;
            printf("Total Bill: Rs. %.2f\n", total);
            break;
        case 2:
            total = qty * 100;
            printf("Total Bill: Rs. %.2f\n", total);
            break;
        case 3:
            total = qty * 80;
            printf("Total Bill: Rs. %.2f\n", total);
            break;
        case 4:
            total = qty * 50;
            printf("Total Bill: Rs. %.2f\n", total);
            break;
        default:
            printf("Invalid food choice.\n");
    }

    return 0;
}
