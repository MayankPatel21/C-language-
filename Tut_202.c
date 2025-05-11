#include <stdio.h>

int main() {
    int total_classes, attended;
    float percentage;

    printf("Enter total number of classes held: ");
    scanf("%d", &total_classes);
    printf("Enter number of classes attended: ");
    scanf("%d", &attended);

    percentage = (attended * 100.0) / total_classes;

    if (percentage >= 75) {
        printf("You are eligible to sit for the exam.\n");
    } else {
        printf("You are NOT eligible to sit for the exam.\n");
    }

    return 0;
}
