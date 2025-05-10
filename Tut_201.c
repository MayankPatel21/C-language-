#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age <= 5) {
        printf("Ticket is free.\n");
    } else if (age <= 18) {
        printf("Ticket price is ₹100.\n");
    } else if (age <= 60) {
        printf("Ticket price is ₹200.\n");
    } else {
        printf("Senior citizen discount: Ticket price is ₹150.\n");
    }

    return 0;
}
