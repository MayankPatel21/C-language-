#include <stdio.h>

int main() {
    for(int num = 1; num <= 200; num++) {
        int reversed = 0, temp = num;

        for(; temp > 0; temp /= 10) {
            reversed = reversed * 10 + (temp % 10);
        }

        if(reversed == num)
            printf("%d is a Palindrome\n", num);
    }

    return 0;
}
