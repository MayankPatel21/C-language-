#include <stdio.h>

int main() {
    int hour;
    printf("Enter the current hour (0-23): ");
    scanf("%d", &hour);

    if (hour >= 5 && hour < 12) {
        printf("Good Morning! Mood: Fresh\n");
    } else if (hour >= 12 && hour < 17) {
        printf("Good Afternoon! Mood: Productive\n");
    } else if (hour >= 17 && hour < 21) {
        printf("Good Evening! Mood: Relaxed\n");
    } else {
        printf("Good Night! Mood: Sleepy\n");
    }

    return 0;
}
