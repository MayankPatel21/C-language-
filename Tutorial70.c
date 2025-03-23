#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;

    printf("Choose: 1 for Rock, 2 for Paper, 3 for Scissors: ");
    scanf("%d", &userChoice);
  
    srand(time(0));
    computerChoice = (rand() % 3) + 1;

    printf("Computer chose: %d\n", computerChoice);

    // Determine winner
    if (userChoice == computerChoice) {
        printf("It's a Tie!\n");
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        printf("You Win!\n");
    } else {
        printf("Computer Wins!\n");
    }

    return 0;
}
