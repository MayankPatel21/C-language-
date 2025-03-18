#include <stdio.h>

int main() {
    int age1, age2, age3;
    printf("Enter the ages of three people: ");
    scanf("%d %d %d", &age1, &age2, &age3);

    if (age1 <= age2 && age1 <= age3) {
        printf("The youngest person is %d years old.\n", age1);
    } else if (age2 <= age1 && age2 <= age3) {
        printf("The youngest person is %d years old.\n", age2);
    } else {
        printf("The youngest person is %d years old.\n", age3);
    }

    return 0;
}
