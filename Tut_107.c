#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter an operator (+ or -): ");
    scanf(" %c", &op);  // Note the space before %c to catch newline
    printf("Enter second number: ");
    scanf("%f", &b);

    if (op == '+') {
        printf("Result: %.2f\n", a + b);
    } 
    else if (op == '-') {
        printf("Result: %.2f\n", a - b);
    } 
    else {
        printf("Invalid operator.\n");
    }

    return 0;
}
