#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("All pairs:\n");
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            printf("(%d, %d)\n", arr[i], arr[j]);
        }
    }

    return 0;
}
