#include <stdio.h>

int main() {
    int hour;

    printf("Enter the hour (0–23): ");
    scanf("%d", &hour);

    switch(hour) {
        case 6: case 7: case 8:
            printf("Morning Alarm: Time to wake up!\n");
            break;
        case 12:
            printf("Noon Reminder: Time for lunch!\n");
            break;
        case 18: case 19:
            printf("Evening Alert: Go for a walk!\n");
            break;
        case 22:
            printf("Night Alarm: Time to sleep!\n");
            break;
        default:
            printf("No special alarm at this hour.\n");
    }

    return 0;
}
