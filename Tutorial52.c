#include <stdio.h>
#include <math.h>

int main() {
    int num, sqrt_num;
    printf("Enter a number: ");
    scanf("%d", &num);

    sqrt_num = sqrt(num);
    if (sqrt_num * sqrt_num == num) {
        printf("The number is a perfect square.\n");
    } else {
        printf("The number is NOT a perfect square.\n");
    }

    return 0;
}
