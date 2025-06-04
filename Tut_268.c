#include <stdio.h>

int main() {
    int numbers[] = {-5, -1, 0, 2, 7, -3, 0, 4, 5, 0, -9, 6, 1, 0, -2, 8, 3, -4, 0, 9};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    for(int i = 0; i < n; i++) {
        if(numbers[i] > 0)
            printf("%d is Positive\n", numbers[i]);
        else if(numbers[i] < 0)
            printf("%d is Negative\n", numbers[i]);
        else
            printf("%d is Zero\n", numbers[i]);
    }

    return 0;
}
