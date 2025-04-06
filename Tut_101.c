#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 5) {
        printf("You get a free ticket!\n");
    } 
    else if (age <= 18) {
        printf("Your ticket price is $7.\n");
    } 
    else if (age <= 60) {
        printf("Your ticket price is $12.\n");
    } 
    else {
        printf("Your ticket price is $5.\n");
    }

    return 0;
}
