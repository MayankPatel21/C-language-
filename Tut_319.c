#include <stdio.h>

int main() {
    int weather;

    printf("Select today's weather:\n");
    printf("1. Hot\n2. Cold\n3. Rainy\n4. Humid\n");
    scanf("%d", &weather);

    switch(weather) {
        case 1:
            printf("Suggestion: Drink at least 3.5 liters of water today.\n");
            break;
        case 2:
            printf("Suggestion: 2.5 liters is enough, but stay hydrated.\n");
            break;
        case 3:
            printf("Suggestion: 2.8 liters recommended.\n");
            break;
        case 4:
            printf("Suggestion: 3 liters – hydration helps fight humidity.\n");
            break;
        default:
            printf("Invalid weather input.\n");
    }

    return 0;
}
