#include <stdio.h>

int main() {
    float balance, withdraw;

    // Asking the user for input
    printf("Enter your account balance: ");
    scanf("%f", &balance);

    printf("Enter the amount you want to withdraw: ");
    scanf("%f", &withdraw);

    // Checking if the transaction can proceed
    if (withdraw > balance) {
        printf("Insufficient balance! Transaction failed.\n");
    } else if (withdraw <= 0) {
        printf("Invalid amount! Please enter a positive value.\n");
    } else {
        balance -= withdraw; // Deducting the amount
        printf("Transaction successful! Remaining balance: %.2f\n", balance);
    }

    return 0;
}
