#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int player, computer = rand() % 3;

    printf("\n choose 0 for rock, 1 for paper, 2 for scissor : ");
    scanf("%d", &player);

    if (computer == 0)
    {
        printf("computer chose rock");
    }
    if (computer == 1)
    {
        printf("computer chose paper");
    }
    if (computer == 2)
    {
        printf("computer chose scissor");
    }

    if (player == 0 && computer == 0)
    {
        printf("\n it's a tie");
    }
    else if (player == 0 && computer == 1)
    {
        printf("\n computer wins");
    }
    else if (player == 0 && computer == 2)
    {
        printf("\n you won congratulations!!");
    }
    else if (player == 1 && computer == 0)
    {
        printf("\n you won congratulations!!");
    }
    else if (player == 1 && computer == 1)
    {
        printf("\n it's a tie");
    }
    else if (player == 1 && computer == 2)
    {
        printf("\n computer wins");
    }
    else if (player == 2 && computer == 0)
    {
        printf("\n computer wins");
    }
    else if (player == 2 && computer == 1)
    {
        printf("\n you won congratulations!!");
    }
    else if (player == 2 && computer == 2)
    {
        printf("\n it's a tie");
    }
    return 0;
}