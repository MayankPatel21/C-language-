#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible for a driving license.\n");
    } else {
        printf("You are NOT eligible for a driving license.\n");
    }

    return 0;
}
