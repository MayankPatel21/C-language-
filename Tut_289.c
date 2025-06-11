#include <stdio.h>

int main() {
    for(int year = 2000; year <= 2100; year++) {
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            printf("%d is a Leap Year\n", year);
    }
    return 0;
}
