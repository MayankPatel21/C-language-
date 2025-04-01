#include <stdio.h>

int main() {
    int liters;
    float bill = 0;
  
    printf("Enter water consumption in liters: ");
    scanf("%d", &liters);

    if (liters < 0) {
        printf("Invalid input! Water consumption cannot be negative.\n");
    } 
    else if (liters <= 1000) {
        bill = 0;
    } 
    else if (liters <= 3000) {
        bill = (liters - 1000) * 0.005;
    } 
    else if (liters <= 5000) {
        bill = (2000 * 0.005) + (liters - 3000) * 0.0075;
    } 
    else if (liters <= 10000) {
        bill = (2000 * 0.005) + (2000 * 0.0075) + (liters - 5000) * 0.010;
    } 
    else {
        bill = (2000 * 0.005) + (2000 * 0.0075) + (5000 * 0.010) + (liters - 10000) * 0.015;
    }
  
    printf("Total water bill: $%.2f\n", bill);

    return 0;
}
