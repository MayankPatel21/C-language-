#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 0 && age <= 12) {
        printf("Ticket price: Free\n");
    } else if (age >= 13 && age <= 17) {
        printf("Ticket price: $8 (Teen Discount)\n");
    } else if (age >= 18 && age <= 59) {
        printf("Ticket price: $15\n");
    } else if (age >= 60) {
        printf("Ticket price: $10 (Senior Discount)\n");
    } else {
        printf("Invalid age input.\n");
    }

    return 0;
}
