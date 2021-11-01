#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int winOrLose(char you, char computer)
{
    int score;

    //score 0 for draw, 1 for win, -1 for lose

    if (you == computer)
    {
        score = 0;
    }
    else if (you == 'r' && computer == 'p')
    {
        score = -1;
    }
    else if (you == 'r' && computer == 's')
    {
        score = 1;
    }
    else if (you == 'p' && computer == 'r')
    {
        score = 1;
    }
    else if (you == 'p' && computer == 's')
    {
        score = -1;
    }
    else if (you == 's' && computer == 'r')
    {
        score = -1;
    }
    else if (you == 's' && computer == 'p')
    {
        score = 1;
    }

    return score;
}

int main()
{
    //for generating random numbers among 1 to 100

    int number;
    srand(time(0));
    number = rand() % 100 + 1;

    //for printing random numbers (Hide if you don't want others to see what computer choosed)
    //printf("%d", number);

    char you, computer;

    //statements for computer to choose rock,paper or scissor based on number which generated randomly

    if (number <= 33)
    {
        computer = 'r';
    }
    else if (number > 33 && number <= 66)
    {
        computer = 'p';
    }
    else
    {
        computer = 's';
    }

    //for selecting user's choice

    printf("Enter your choice:\n 'r' for rock\n 'p' for paper\n 's' for scissor\n");
    printf("\n");
    printf("Put your choice here: ");
    scanf("%c", &you);

    //function for collecting result

    int result;
    result = winOrLose(you, computer);

    //string for full word

    char str1[10], str2[10];

    if (you == 'r')
    {
        strcpy(str1, "Rock");
    }
    else if (you == 'p')
    {
        strcpy(str1, "Paper");
    }
    else if (you == 's')
    {
        strcpy(str1, "Scissor");
    }

    if (computer == 'r')
    {
        strcpy(str2, "Rock");
    }
    else if (computer == 'p')
    {
        strcpy(str2, "Paper");
    }
    else if (computer == 's')
    {
        strcpy(str2, "Scissor");
    }

    //function for printing result

    printf("\n");
    printf("You choosed %s and computer choosed %s!\n", str1, str2);

    if (result == 0)
    {
        printf("Tie! \nBetter luck next time");
    }
    else if (result == 1)
    {
        printf("You won! \nLet's party");
    }
    else if (result == -1)
    {
        printf("You lose! \nGo die");
    }

    printf("\n");
}

