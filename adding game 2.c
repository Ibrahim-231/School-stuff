#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
int wrong, point = 0;
srand(time(NULL));
for(wrong=0; wrong<3;){
    int cas = rand()%4, a = rand()%10+1, b = rand()%10+1,c = rand()%10+1,d= rand()%10+1, e = rand()%10+1;
    int  ans, user_input;
    if(cas ==0){
        ans = a + b;
       printf(" %d + %d = ", a,b);
        scanf("%d", &user_input);
    }
     if(cas ==1){
        ans = a + b + c;
       printf(" %d + %d + %d= ", a, b, c);
        scanf("%d", &user_input);
    }
     if(cas ==2){
        ans = a + b+c+d;
       printf(" %d + %d + %d + %d  = ", a, b,c,d);
        scanf("%d", &user_input);
    }
     if(cas ==3){
        ans = a + b+c+d+e;
       printf(" %d + %d + %d + %d + %d  = ", a, b, c, d, e);
        scanf("%d", &user_input);
    }
    if(ans != user_input){
            printf("Wrong! The answer was %d.\n", ans);
        wrong++;
        }else {
            point++;
        }
}
printf("You earned a total of %d points.",point);
    return 0;
}
