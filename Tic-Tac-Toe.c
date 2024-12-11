#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int gameend(char grid_p[3][3],int *gameover_p){
if(grid_p[0][0]==grid_p[0][1]&&grid_p[0][0]==grid_p[0][2]){
    if(grid_p[0][0]=='X'){
        printf("You win.\n");
    }else if(grid_p[0][0]=='O') {printf("Computer wins.\n");
}*gameover_p=1;
} else if(grid_p[1][0]==grid_p[1][1]&&grid_p[1][0]==grid_p[1][2]){
    if(grid_p[1][0]=='X'){
        printf("You win.\n");
    }else if(grid_p[1][0]=='O'){printf("Computer wins.\n");
}*gameover_p=1;
}else if(grid_p[2][0]==grid_p[2][1]&&grid_p[2][0]==grid_p[2][2]){
    if(grid_p[2][0]=='X'){
        printf("You win.\n");
    }else if(grid_p[2][0]=='O') {printf("Computer wins.\n");
}*gameover_p=1;
}else if(grid_p[0][0]==grid_p[1][1]&&grid_p[0][0]==grid_p[2][2]){
    if(grid_p[0][0]=='X'){
        printf("You win.\n");
    }else if(grid_p[0][0]=='O'){printf("Computer wins.\n");
}*gameover_p=1;
} else if(grid_p[2][0]==grid_p[1][1]&&grid_p[2][0]==grid_p[0][2]){
    if(grid_p[2][0]=='X'){
        printf("You win.\n");
    }else if(grid_p[2][0]=='O'){printf("Computer wins.\n");
}*gameover_p=1;
} else if(grid_p[0][0]==grid_p[1][0]&&grid_p[0][0]==grid_p[2][0]){
    if(grid_p[0][0]=='X'){
        printf("You win.\n");
    }else if(grid_p[0][0]=='O'){printf("Computer wins.\n");
}*gameover_p=1;
} else if(grid_p[0][1]==grid_p[1][1]&&grid_p[0][1]==grid_p[2][1]){
    if(grid_p[0][1]=='X'){
        printf("You win.\n");
    }else if(grid_p[0][1]=='O'){printf("Computer wins.\n");
}*gameover_p=1;
} else if(grid_p[0][2]==grid_p[1][2]&&grid_p[0][2]==grid_p[2][2]){
    if(grid_p[0][2]=='X'){
        printf("You win.\n");
    }else if(grid_p[0][2]=='O'){printf("Computer wins.\n");
}*gameover_p=1;
}
}
int user_turn(char grid_p[3][3],int turn){
char space[1];
    int i,j,k=0;
   printf("Select a space to fill in: \n");
   scanf(" %c", &space[0]);
   if(space[0]>='1'&&space[0]<='9'){
   for(i=0;i<3;i++){
    for(j=0;j<3;j++){
     if(grid_p[i][j]== space[0]){
        grid_p[i][j]='X';
        k=1;
     }
    }
   }
   
   }else {
    printf("Wrong input. Choose again.\n");
    user_turn(grid_p,turn);
   }
   if(k=0){
    printf("Wrong input. Choose again.\n");
    user_turn(grid_p,turn);
   }
   turn =1;
   return turn;
}
int comp_turn(char grid_p[3][3],int turn){
    char space[10]={'1','2','3','4','5','6','7','8','9','\0'};
    int k= rand()%9;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(grid_p[i][j]== space[k]){
                grid_p[i][j]= 'O';
                turn =0;
                break;
            }
        }
    }
   return turn;
}
void drawgrid(char grid[3][3]){
for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
        printf("|%c|", grid[i][j]);
    }
    printf("\n---------\n");
}
}
int main(){
    srand(time(NULL));
char grid[3][3] ={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int turn=0, gameover=0;
do{
    if(turn==0) drawgrid(grid);
    if(turn==0){
turn = user_turn(grid,turn);
gameend(grid,&gameover);
    }else if(turn==1){
turn = comp_turn(grid,turn);
gameend(grid,&gameover);
    }
}while(gameover==0);
drawgrid(grid);
    return 0;
}