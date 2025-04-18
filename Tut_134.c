#include <stdio.h>

int main() {
    int totalClasses, attended;
    float attendance;

    printf("Enter total number of classes: ");
    scanf("%d", &totalClasses);
    printf("Enter number of classes attended: ");
    scanf("%d", &attended);

    attendance = (attended * 100.0) / totalClasses;

    if (attendance >= 75) {
        printf("You are eligible to sit for the exam.\n");
    } else {
        printf("Not eligible for the exam. Attendance is %.2f%%\n", attendance);
    }

    return 0;
}
