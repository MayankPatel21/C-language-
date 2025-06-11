#include <stdio.h>

int main() {
    int arr[] = {4, 7, 12, 33, 8, 9, 0, 21};
    int n = sizeof(arr) / sizeof(arr[0]);
    int even = 0, odd = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even numbers: %d\nOdd numbers: %d\n", even, odd);
    return 0;
}
