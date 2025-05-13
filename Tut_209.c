#include <stdio.h>

int main() {
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    if (month == 12 || month == 1 || month == 2) {
        printf("Season: Winter\n");
    } else if (month >= 3 && month <= 5) {
        printf("Season: Spring\n");
    } else if (month >= 6 && month <= 8) {
        printf("Season: Summer\n");
    } else if (month >= 9 && month <= 11) {
        printf("Season: Autumn\n");
    } else {
        printf("Invalid month number.\n");
    }

    return 0;
}
