#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 5) {
        printf("Ticket is free.\n");
    } else if (age <= 18) {
        printf("Ticket price: ₹100\n");
    } else if (age <= 60) {
        printf("Ticket price: ₹150\n");
    } else {
        printf("Ticket price: ₹80 (Senior citizen discount)\n");
    }

    return 0;
}
