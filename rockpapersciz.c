#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <unistd.h>

int 🏆, 💀, 🤝;

char 🤖() {
    char 🐵;
    do {
        printf("Pick Rock (r), Paper (p), or Scissors (s): ");
        scanf(" %c", &🐵);
        🐵 = tolower(🐵);
    } while (🐵 != 'r' && 🐵 != 'p' && 🐵 != 's');
    return 🐵;
}

char 🖥️() {
    char 🥭;
    int 🍀 = rand() % 3;
    switch(🍀) {
        case 0: 
            🥭 = 'r';
            break;
        case 1: 
            🥭 = 'p';
            break;
        case 2:
            🥭 = 's';
            break;
        default: printf("Those who know: 💀💀💀");
    } 
    return 🥭;
}

void 🎮(char 😈, char 🌂) {
    if (😈 == 🌂) {
        printf("It's a draw\n");
        🤝++;
    } else if ((😈 == 'r' && 🌂 == 's') || (😈 == 's' && 🌂 == 'p') || (😈 == 'p' && 🌂 == 'r')) {
        printf("You win\n");
        🏆++;
    } else {
        printf("You lose\n");
        💀++;
    }
}

char SIGMA() {
    char 👽;
    printf("Do you want to play the game? (Y/n): ");
    scanf(" %c", &👽);
    👽 = tolower(👽);
    return 👽;
}

void 🪨() {
    printf("        ___\n");
    printf("     _/`.-'`.\n");
    printf("   _/` .  _.''\n");
    printf("  /__.-'`\n");
}

void 📜() {
    printf("___________~~~\n");
    printf("|         ~~~|\n");
    printf("|  ~~~~  ~~~~|\n");
    printf("|_________~~~\n");
}

void 🌂() {
    printf("   _       ,/'\n");
    printf("  (_).  ,/'\n");
    printf("   _  ::\n");
    printf("  (_)'  `\\.\n");
    printf("           `\\.\n");
}

void 🎨(char 👾){
    printf("Computer chose:\n");
    if (👾 == 'r'){
        🪨();
    } else if (👾 == 'p'){
        📜();
    } else {
        🌂();
    }
}   

int main() {
    srand((unsigned int)time(NULL));
    char 🚀 = SIGMA();
    char 🐾;
    char 🧑‍💻;
    if (🚀 == 'n'){
        printf("Okay, the game will play itself for you\n");
    }
    while (1){
        if (🚀 == 'y') {
            🐾 = 🤖();
        } else {
            🐾 = 🖥️();
        }
        char 🧑‍💻 = 🖥️();
        printf("You chose: \'%c\'\n", 🐾);
        🎨(🧑‍💻);
        🎮(🐾, 🧑‍💻);
        printf("Wins: %d, loses: %d, draws: %d\n\n", 🏆, 💀, 🤝); 
        sleep(1); 
    }     

    return 0;
}
