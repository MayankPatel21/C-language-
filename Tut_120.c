#include <stdio.h>

int main() {
    int hours;
    float pay;

    printf("Enter total working hours this week: ");
    scanf("%d", &hours);

    if (hours > 40) {
        pay = 40 * 10 + (hours - 40) * 15; // 10$/hr for normal, 15$/hr for overtime
        printf("You have earned overtime pay. Total pay: $%.2f\n", pay);
    } else {
        pay = hours * 10;
        printf("Total pay: $%.2f\n", pay);
    }

    return 0;
}
