#include <stdio.h>

int main() {
    float data;
    printf("Enter remaining internet data in GB: ");
    scanf("%f", &data);

    if (data >= 5) {
        printf("You have enough data for the day.\n");
    } else if (data > 0) {
        printf("Warning: Data running low.\n");
    } else {
        printf("No data left! Recharge your pack.\n");
    }

    return 0;
}
