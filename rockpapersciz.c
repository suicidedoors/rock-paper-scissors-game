#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <unistd.h>

static int wins;
static int loses;
static int draws;

char playerMove() {
    char c;
    do {
        printf("Pick Rock (r), Paper (p), or Scissors (s): ");
        scanf(" %c", &c);
        c = tolower(c);
    } while (c != 'r' && c != 'p' && c!= 's');
    return c;
}

char computerMove() {
    char c;
    int i = rand() % 3;
    switch(i) {
        case 0: 
            c = 'r';
            break;
        case 1: 
            c = 'p';
            break;
        case 2:
            c = 's';
            break;
        default: printf("Those who know: 💀");
    } 
    return c;
}

void getWinner(char a, char b) {
    if (a == b) {
        printf("It's a draw\n");
        draws++;
    } else if ((a == 'r' && b == 's') || (a == 's' && b == 'p') || (a == 'p' && b == 'r')) {
        printf("You win\n");
        wins++;
    } else {
        printf("You lose\n");
        loses++;
    }
}

char getautopilot(){
    char 😭;
    printf("Do you want to play the game? (Y/n): ");
    scanf(" %c", &😭);
    😭 = tolower(😭);
    return 😭;
}

int main() {
    srand((unsigned int)time(NULL));
    char autopilot = getautopilot();
    char player;
    char computer;
    if (autopilot == 'n'){
        printf("Okay, the game will play itself for you\n");
    }
    while (1){
        if (autopilot == 'y') {
            player = playerMove();
        } else {
            player = computerMove();
        }
        char computer = computerMove();
        printf("You chose: \'%c\'\n", player);
        printf("Computer chose: \'%c\'\n", computer);
        getWinner(player, computer);
        printf("Wins: %d, loses: %d, draws: %d\n\n", wins, loses, draws); 
        sleep(1); 
    }     

    return 0;
}
