#include <stdio.h>

int main() {
    for(int num = 100; num <= 999; num++) {
        int sum = 0, temp = num;

        for(; temp > 0; temp /= 10) {
            int digit = temp % 10;
            sum += digit * digit * digit;
        }

        if(sum == num)
            printf("%d is an Armstrong Number\n", num);
    }

    return 0;
}
