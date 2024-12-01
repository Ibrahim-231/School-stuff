#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void get_solution(char a, char b) {


    if (a == b) {
        printf("its a tie\n");
    }
    else{
        if (a == 'r' && b == 'p') {
            printf("Paper wins. You lose.");
        }
        else if (a == 'r' && b == 's') {
            printf("rock wins. You win.");
        }
        else if (a == 'p' && b == 'r') {
            printf("paper wins. You win.");
        }
        else if (a == 'p' && b == 's') {
            printf("scissors wins. You lose.");
        }
        else if (a == 's' && b == 'p') {
            printf("scissors wins. You win.");
        }
        else if (a == 's' && b == 'r') {
            printf("rock wins. You lose.");
        }

    }
}
int main(){
    char rock = 'r';
    char  paper = 'p';
    char scissors = 's';
    char c;
    char choices[] = {'r', 's', 'p'};

    // char options[3][8]={ "rock", "paper", "scissors"};
    // char choice [1];
    char user_choice, computer_choice;
    // Seed the random number generator with the current time

    // scissors =

    do{
        printf("Enter \'r\' for rock, \'p\' for paper or \'s\' for scissors: \n");
        scanf(" %c", &user_choice);

        srand(time(NULL));

        int randomIndex = rand() % 3;


        computer_choice = choices[randomIndex];
        printf("%c\n", computer_choice);

        get_solution(user_choice, computer_choice);
        printf("Do you want to continue?(y/n)");
        scanf(" %c", &c);

    } while(user_choice == computer_choice || c == 'y');

    return 0;
}
