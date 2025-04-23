#include <stdio.h>

int main() {
    int day;
    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    if (day >= 1 && day <= 5) {
        printf("It is a weekday.\n");
    } else if (day == 6 || day == 7) {
        printf("It is the weekend!\n");
    } else {
        printf("Invalid day number.\n");
    }

    return 0;
}
