#include <stdio.h>

int main() {
    int day;

    printf("Enter day of the week (1=Monday, ..., 7=Sunday): ");
    scanf("%d", &day);

    switch(day) {
        case 1: printf("Workout: Chest & Triceps\n"); break;
        case 2: printf("Workout: Back & Biceps\n"); break;
        case 3: printf("Workout: Legs\n"); break;
        case 4: printf("Workout: Shoulders\n"); break;
        case 5: printf("Workout: Core & Cardio\n"); break;
        case 6: printf("Workout: Full Body HIIT\n"); break;
        case 7: printf("Rest Day! Recovery time.\n"); break;
        default: printf("Invalid day number.\n");
    }

    return 0;
}
