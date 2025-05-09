#include <stdio.h>

int main() {
    char type;
    printf("Enter room type (A for AC, N for Non-AC): ");
    scanf(" %c", &type);

    if (type == 'A' || type == 'a') {
        printf("Room charge: ₹2000 per night\n");
    } else if (type == 'N' || type == 'n') {
        printf("Room charge: ₹1000 per night\n");
    } else {
        printf("Invalid room type.\n");
    }

    return 0;
}
