#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age <= 5) {
        printf("Ticket: Free\n");
    } else if (age <= 18) {
        printf("Ticket: $7\n");
    } else if (age <= 60) {
        printf("Ticket: $12\n");
    } else {
        printf("Ticket: $6 (Senior Discount)\n");
    }

    return 0;
}
