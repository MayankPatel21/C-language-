#include <stdio.h>

int main() {
    int option;
    float value;

    printf("Unit Converter:\n1. cm to inches\n2. inches to cm\n3. m to feet\n");
    printf("Enter your choice: ");
    scanf("%d", &option);

    printf("Enter the value to convert: ");
    scanf("%f", &value);

    switch(option) {
        case 1:
            printf("%.2f cm = %.2f inches\n", value, value / 2.54);
            break;
        case 2:
            printf("%.2f inches = %.2f cm\n", value, value * 2.54);
            break;
        case 3:
            printf("%.2f meters = %.2f feet\n", value, value * 3.281);
            break;
        default:
            printf("Invalid conversion choice!\n");
    }

    return 0;
}
