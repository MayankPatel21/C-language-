#include <stdio.h>

int main() {
    int time;

    printf("Enter the number of seconds (0-60): ");
    scanf("%d", &time);

    if (time >= 0 && time <= 30) {
        printf("Traffic Light: Green (Go)\n");
    }
    else if (time >= 31 && time <= 40) {
        printf("Traffic Light: Yellow (Slow Down)\n");
    }
    else if (time >= 41 && time <= 60) {
        printf("Traffic Light: Red (Stop)\n");
    }
    else {
        printf("Invalid input! Time should be between 0 and 60 seconds.\n");
    }

    return 0;
}
