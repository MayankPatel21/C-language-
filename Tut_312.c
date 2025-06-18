#include <stdio.h>

int main() {
    int mood;

    printf("Choose your mood:\n1. Happy\n2. Sad\n3. Angry\n4. Romantic\n5. Sleepy\n");
    printf("Enter your mood number: ");
    scanf("%d", &mood);

    switch(mood) {
        case 1:
            printf("Suggested Genre: Pop or Dance\n");
            break;
        case 2:
            printf("Suggested Genre: Soft rock or Blues\n");
            break;
        case 3:
            printf("Suggested Genre: Metal or Rap\n");
            break;
        case 4:
            printf("Suggested Genre: Love Songs or R&B\n");
            break;
        case 5:
            printf("Suggested Genre: Lo-fi or Instrumental\n");
            break;
        default:
            printf("Unknown mood! Try again.\n");
    }

    return 0;
}
