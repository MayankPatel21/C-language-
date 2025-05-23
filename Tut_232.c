#include <stdio.h>

int main() {
    for(int year = 2000; year <= 2050; year++) {
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d is a leap year\n", year);
        }
    }
    return 0;
}
