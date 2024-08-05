#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int player, computer;
    int play_again = 1;

    while (play_again) {
        printf("\nChoose 0 for rock, 1 for paper, 2 for scissor: ");
        if (scanf("%d", &player) != 1) {
            printf("Invalid input. Please try again.\n");
            continue;
        }

        computer = rand() % 3;

        printf("Computer chose: ");
        switch (computer) {
            case 0:
                printf("rock\n");
                break;
            case 1:
                printf("paper\n");
                break;
            case 2:
                printf("scissor\n");
                break;
        }

        int result = (player - computer + 3) % 3;
        switch (result) {
            case 0:
                printf("It's a tie!\n");
                break;
            case 1:
                printf("You won! Congratulations!\n");
                break;
            case 2:
                printf("Computer wins!\n");
                break;
        }

        printf("Play again? (1 for yes, 0 for no): ");
        if (scanf("%d", &play_again) != 1) {
            printf("Invalid input. Exiting game.\n");
            break;
        }
    }

    return 0;
}