#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    srand(time(NULL));
    int points =0, wrongs =0;
    do{
        int a = rand()%10 +1, b= rand()%10+1, c= rand()%10+1, d= rand()%10+1, e= rand()%10+1, ans, user_input;
        int cas = rand()%3;
       switch(cas){
        case 0:
        ans = a + b;
       printf(" %d + %d = ", a,b);
        scanf("%d", &user_input);
        break;
        case 1:
        ans = a + b + c;
        printf(" %d + %d + %d = ", a,b,c);
        scanf("%d", &user_input);
        break;
        case 2:
        ans = a + b + c + d;
        printf(" %d + %d + %d + %d = ", a, b, c, d);
        scanf("%d", &user_input);
        break;
        case 3:
        ans = a + b +c +d+e;
        printf(" %d + %d + %d + %d + %d = ", a, b, c, d, e);
        scanf("%d", &user_input);
        break;
       }
       if(ans==user_input){
        points++;
       }else{
        printf("Wrong! The answer was %d.\n", ans);
        wrongs++;
       }
    }while(wrongs<3);
    printf("You earned a total of %d points.",points);
    return 0;
}