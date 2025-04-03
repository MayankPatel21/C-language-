#include <stdio.h>
#include <string.h>

int main() {
    char vehicle[10];
    int toll = 0;

    printf("Enter vehicle type (bike, car, bus, truck): ");
    scanf("%s", vehicle);

    if (strcmp(vehicle, "bike") == 0) {
        toll = 2;
    } 
    else if (strcmp(vehicle, "car") == 0) {
        toll = 5;
    } 
    else if (strcmp(vehicle, "bus") == 0) {
        toll = 10;
    } 
    else if (strcmp(vehicle, "truck") == 0) {
        toll = 15;
    } 
    else {
        printf("Invalid vehicle type!\n");
        return 0;
    }

    printf("Toll Tax: $%d\n", toll);
    return 0;
}
