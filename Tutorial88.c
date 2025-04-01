#include <stdio.h>

int main() {
    int age, time;
    float price;
  
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter the show time (in 24-hour format): ");
    scanf("%d", &time);

    if (age < 0 || time < 0 || time > 24) {
        printf("Invalid input! Age and time must be valid values.\n");
    }
    else if (age <= 5) {
        printf("Ticket Price: Free Entry\n");
    }
    else {
        if (time < 17) { // Before 5 PM (Morning Show)
            if (age <= 12) price = 5;
            else if (age <= 60) price = 10;
            else price = 6;
        } 
        else {  
            if (age <= 12) price = 7;
            else if (age <= 60) price = 12;
            else price = 8;
        }
        printf("Ticket Price: $%.2f\n", price);
    }

    return 0;
}
