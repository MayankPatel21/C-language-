#include <stdio.h>

int main() {
    int num = 1221, original = num, reversed = 0;

    for(; num > 0; num /= 10) {
        reversed = reversed * 10 + (num % 10);
    }

    if(original == reversed)
        printf("%d is a palindrome\n", original);
    else
        printf("%d is not a palindrome\n", original);

    return 0;
}
