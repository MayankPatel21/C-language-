#include <stdio.h>

int main() {
    float data;
    printf("Enter total data used this month (in GB): ");
    scanf("%f", &data);

    if (data <= 1) {
        printf("Usage: Light. No extra charge.\n");
    } else if (data <= 5) {
        printf("Usage: Moderate. You may be charged extra soon.\n");
    } else {
        printf("Usage: High! Additional charges applied.\n");
    }

    return 0;
}
