#include <stdio.h>

int main() {
    int choice;

    printf("ATM Menu:\n");
    printf("1. Check Balance\n");
    printf("2. Withdraw Money\n");
    printf("3. Deposit Money\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Your balance is Rs. 10,000\n"); break;
        case 2: printf("Withdrawal successful.\n"); break;
        case 3: printf("Deposit successful.\n"); break;
        case 4: printf("Thank you! Exiting...\n"); break;
        default: printf("Invalid choice. Try again.\n");
    }

    return 0;
}
