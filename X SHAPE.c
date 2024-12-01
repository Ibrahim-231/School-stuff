#include <stdio.h>
int main(){
    int i, j;
    for (i=0; i<=6; i++){
        for(j=0;j<=6;j++){
            if(i==j||j+i ==6){
                printf("9");
            }else printf(" ");
        }
        printf("\n");
    }return 0;
}