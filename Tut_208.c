#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks out of 100: ");
    scanf("%d", &marks);

    if (marks >= 75) {
        printf("Result: Distinction\n");
    } else if (marks >= 40) {
        printf("Result: Pass\n");
    } else {
        printf("Result: Fail\n");
    }

    return 0;
}
