#include <stdio.h>

int main() {
    int wpm; // words per minute

    printf("Enter your typing speed (WPM): ");
    scanf("%d", &wpm);

    switch(wpm / 20) {
        case 0:
            printf("Typing Speed: Beginner\n");
            break;
        case 1:
            printf("Typing Speed: Average\n");
            break;
        case 2:
            printf("Typing Speed: Good\n");
            break;
        case 3:
            printf("Typing Speed: Fast\n");
            break;
        default:
            printf("Typing Speed: Professional\n");
    }

    return 0;
}
