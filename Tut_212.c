#include <stdio.h>

int main() {
    int type;
    printf("Enter room type (1=Standard, 2=Deluxe, 3=Suite): ");
    scanf("%d", &type);

    if (type == 1) {
        printf("Room Price: ₹2000 per night\n");
    } else if (type == 2) {
        printf("Room Price: ₹3500 per night\n");
    } else if (type == 3) {
        printf("Room Price: ₹5000 per night\n");
    } else {
        printf("Invalid room type selected.\n");
    }

    return 0;
}
