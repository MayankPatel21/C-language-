#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter electricity units used: ");
    scanf("%d", &units);

    switch(units / 100) {
        case 0:
        case 1:
            bill = units * 1.50;
            break;
        case 2:
        case 3:
            bill = units * 2.00;
            break;
        case 4:
        case 5:
            bill = units * 2.50;
            break;
        default:
            bill = units * 3.00;
    }

    printf("Estimated Electricity Bill: Rs. %.2f\n", bill);
    return 0;
}
