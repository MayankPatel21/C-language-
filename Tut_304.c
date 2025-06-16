#include <stdio.h>

int main() {
    int player;
    printf("Choose: 1. Rock  2. Paper  3. Scissors\n");
    printf("Enter your choice: ");
    scanf("%d", &player);

    int computer = 2; // Let's say computer chose Paper

    switch(player) {
        case 1:
            if(computer == 1) printf("Draw! Both chose Rock.\n");
            else if(computer == 2) printf("You lose! Paper covers Rock.\n");
            else printf("You win! Rock smashes Scissors.\n");
            break;
        case 2:
            if(computer == 1) printf("You win! Paper covers Rock.\n");
            else if(computer == 2) printf("Draw! Both chose Paper.\n");
            else printf("You lose! Scissors cut Paper.\n");
            break;
        case 3:
            if(computer == 1) printf("You lose! Rock smashes Scissors.\n");
            else if(computer == 2) printf("You win! Scissors cut Paper.\n");
            else printf("Draw! Both chose Scissors.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
