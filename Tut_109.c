#include <stdio.h>

int main() {
    int user, computer = 1; 

    printf("Choose:\n1. Rock\n2. Paper\n3. Scissors\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &user);

    if(user == computer) {
        printf("It's a Draw!\n");
    } else if((user == 1 && computer == 3) || (user == 2 && computer == 1) || (user == 3 && computer == 2)) {
        printf("You Win!\n");
    } else if(user >= 1 && user <= 3) {
        printf("You Lose!\n");
    } else {
        printf("Invalid Choice!\n");
    }

    return 0;
}
