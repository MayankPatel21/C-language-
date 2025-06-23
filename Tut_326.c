#include <stdio.h>

int main() {
    int db;

    printf("Enter noise level in decibels (dB): ");
    scanf("%d", &db);

    switch(db / 10) {
        case 2: case 3:
            printf("Very Quiet (e.g., whisper, library)\n");
            break;
        case 4: case 5:
            printf("Moderate (e.g., conversation, office)\n");
            break;
        case 6: case 7:
            printf("Loud (e.g., traffic, vacuum cleaner)\n");
            break;
        case 8: case 9: case 10:
            printf("Very Loud or Harmful (e.g., construction, concert)\n");
            break;
        default:
            printf("Noise level unknown or extreme.\n");
    }

    return 0;
}
