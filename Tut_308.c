#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    switch(age / 10) {
        case 0: case 1:
            printf("Ticket price: Rs. 50 (Child Discount)\n");
            break;
        case 2: case 3: case 4: case 5:
            printf("Ticket price: Rs. 120 (Adult)\n");
            break;
        case 6: case 7: case 8: case 9:
            printf("Ticket price: Rs. 80 (Senior Citizen)\n");
            break;
        default:
            printf("Invalid age entered.\n");
    }

    return 0;
}
