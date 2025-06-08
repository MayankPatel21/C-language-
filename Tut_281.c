#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    for(int num = 1; num <= 500; num++) {
        int sum = 0, temp = num;

        for(; temp > 0; temp /= 10) {
            int digit = temp % 10;
            sum += factorial(digit);
        }

        if(sum == num)
            printf("%d is a Strong Number\n", num);
    }

    return 0;
}
