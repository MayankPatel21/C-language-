#include <stdio.h>

int main() {
    float dataUsed;
    printf("Enter data used in GB: ");
    scanf("%f", &dataUsed);

    if (dataUsed < 1) {
        printf("Minimal usage. Great job!\n");
    } else if (dataUsed >= 1 && dataUsed <= 5) {
        printf("Moderate usage.\n");
    } else {
        printf("High usage! Consider a higher data plan.\n");
    }

    return 0;
}
