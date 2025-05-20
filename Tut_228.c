#include <stdio.h>

int main() {
    int arr[] = {10, 25, 17, 98, 45};
    int max = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Largest element: %d\n", max);
    return 0;
}
