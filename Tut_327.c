#include <stdio.h>

int main() {
    int position;

    printf("Enter planet number from the sun (1-8): ");
    scanf("%d", &position);

    switch(position) {
        case 1: printf("Mercury\n"); break;
        case 2: printf("Venus\n"); break;
        case 3: printf("Earth 🌍\n"); break;
        case 4: printf("Mars\n"); break;
        case 5: printf("Jupiter\n"); break;
        case 6: printf("Saturn\n"); break;
        case 7: printf("Uranus\n"); break;
        case 8: printf("Neptune\n"); break;
        default: printf("Invalid planet position!\n");
    }

    return 0;
}
