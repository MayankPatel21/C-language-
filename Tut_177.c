#include <stdio.h>

int main() {
    float weight;
    printf("Enter the weight of the package (in kg): ");
    scanf("%f", &weight);

    if (weight <= 1) {
        printf("Shipping Cost: $5\n");
    } else if (weight <= 5) {
        printf("Shipping Cost: $10\n");
    } else if (weight <= 10) {
        printf("Shipping Cost: $20\n");
    } else {
        printf("Package too heavy for standard shipping.\n");
    }

    return 0;
}
