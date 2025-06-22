#include <stdio.h>

int main() {
    int plan;

    printf("Choose a data pack:\n");
    printf("1. 1GB/day - Rs.199\n2. 1.5GB/day - Rs.249\n3. 2GB/day - Rs.299\n4. 3GB/day - Rs.399\n");
    scanf("%d", &plan);

    switch(plan) {
        case 1: printf("You selected 1GB/day plan for Rs.199 (28 days).\n"); break;
        case 2: printf("You selected 1.5GB/day plan for Rs.249 (28 days).\n"); break;
        case 3: printf("You selected 2GB/day plan for Rs.299 (28 days).\n"); break;
        case 4: printf("You selected 3GB/day plan for Rs.399 (28 days).\n"); break;
        default: printf("Invalid data pack selected.\n");
    }

    return 0;
}
