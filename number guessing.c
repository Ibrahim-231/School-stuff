#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    srand(time(NULL));
        char a, b;
    do{
        int comp_num = 1 + rand()%3, user_num;
    printf("the computer has guessed a number from 1 to 100.\nGuess the number: ");
    //do{
    scanf(" %d", &user_num);
    if(comp_num == user_num){
        printf("You guessed correctly. You win.\nDo you wish to continue?\n(y/n): ");
        scanf(" %c", &b);
    }else {
        if(comp_num > user_num){
            printf("The number is higher than you guessed.\nDo you wish to continue?\n(y/n): ");
            scanf(" %c", &a);
        }else if(comp_num < user_num){
            printf("The number is lower than you guessed.\nDo you wish to continue?\n(y/n): ");
            scanf(" %c", &a);
    }
    }
    if(a == 'y'){
        printf("Guess the number: ");
    }
    //}while(a== 'y'|| 'Y' && b != a);
    printf("Do you wish to continue? ");
    //scanf(" %c", &a);
    }while(b== 'y'|| 'Y');
    return 0;
}