#include <stdio.h>

int main() {
    int marks[] = {95, 76, 45, 66, 89, 58, 33, 100};
    int n = sizeof(marks)/sizeof(marks[0]);

    for(int i = 0; i < n; i++) {
        if(marks[i] >= 90)
            printf("Marks: %d → Grade: A+\n", marks[i]);
        else if(marks[i] >= 75)
            printf("Marks: %d → Grade: A\n", marks[i]);
        else if(marks[i] >= 60)
            printf("Marks: %d → Grade: B\n", marks[i]);
        else if(marks[i] >= 40)
            printf("Marks: %d → Grade: C\n", marks[i]);
        else
            printf("Marks: %d → Grade: Fail\n", marks[i]);
    }

    return 0;
}
