#include <stdio.h>

int main() {
    char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    for(int i = 0; i < 7; i++) {
        if(i == 5 || i == 6)
            printf("%s → Weekend\n", days[i]);
        else
            printf("%s → Workday\n", days[i]);
    }

    return 0;
}
