#include <stdio.h>

int main() {
    int m1, m2, m3;
    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    if (m1 >= 35 && m2 >= 35 && m3 >= 35) {
        printf("You passed the exam!\n");
    } else {
        printf("You failed.\n");
    }

    return 0;
}
