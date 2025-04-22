#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter operator (+ or -): ");
    scanf(" %c", &op);

    if (op == '+') {
        printf("Result = %d\n", a + b);
    } else if (op == '-') {
        printf("Result = %d\n", a - b);
    } else {
        printf("Invalid operator.\n");
    }

    return 0;
}
