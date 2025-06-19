#include <stdio.h>

int main() {
    int mode;

    printf("Select Power Mode:\n1. Performance\n2. Balanced\n3. Battery Saver\n");
    scanf("%d", &mode);

    switch(mode) {
        case 1:
            printf("Mode set to PERFORMANCE: High CPU usage, faster operations.\n");
            break;
        case 2:
            printf("Mode set to BALANCED: Optimized for everyday tasks.\n");
            break;
        case 3:
            printf("Mode set to BATTERY SAVER: Reduces background processes.\n");
            break;
        default:
            printf("Invalid mode selected.\n");
    }

    return 0;
}
