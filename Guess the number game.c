#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int player1attempts(char player1[]){

    printf("\n%s's turn\n", player1);
    int rNum;
    srand(time(0));
    rNum = rand()%100+1;
    //printf("%d\n", rNum);

    int attempt=1;
    int pNum;

    printf("Choose a number between 1 to 100\n");
    scanf("%d", &pNum);

    if(pNum==rNum){
        return attempt;
    }
    else if(pNum!=rNum){
        while(pNum!=rNum){
            printf("Try again!\n");
            scanf("%d", &pNum);
            attempt++;
        }
        return attempt;
    }
}

int player2attempts(char player2[]){

    printf("\n%s's turn\n", player2);
    int rNum;
    srand(time(0));
    rNum = rand()%100+1;
    //printf("%d\n", rNum);

    int attempt=1;
    int pNum;

    printf("Choose a number between 1 to 100\n");
    scanf("%d", &pNum);

    if(pNum==rNum){
        return attempt;
    }
    else if(pNum!=rNum){
        while(pNum!=rNum){
            printf("Try again!\n");
            scanf("%d", &pNum);
            attempt++;
        }
        return attempt;
    }
}

int main(){
    char player1[50], player2[50];
    printf("Enter player 1 name: ");
    gets(player1);
    fflush(stdin);
    printf("Enter player 2 name: ");
    gets(player2);
    printf("\n");

    int p1attempt = player1attempts(player1);
    printf("%s took %d attempts\n", player1, p1attempt);

    int p2attempt = player2attempts(player2);
    printf("%s took %d attempts\n", player2, p2attempt);

    printf("\n");
    if(p1attempt>p2attempt){
        printf("%s win the game", player2);
    }
    else if(p1attempt<p2attempt){
        printf("%s win the game", player1);
    }
    else{
        printf("Game tie!");
    }
    printf("\n");

    return 0;
}

