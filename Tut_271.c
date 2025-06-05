#include <stdio.h>

int main() {
    int count3 = 0, count5 = 0, countBoth = 0;

    for(int i = 1; i <= 50; i++) {
        if(i % 3 == 0 && i % 5 == 0)
            countBoth++;
        else if(i % 3 == 0)
            count3++;
        else if(i % 5 == 0)
            count5++;
    }

    printf("Divisible by 3: %d\n", count3);
    printf("Divisible by 5: %d\n", count5);
    printf("Divisible by both 3 and 5: %d\n", countBoth);

    return 0;
}
