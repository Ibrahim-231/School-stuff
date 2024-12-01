#include <stdio.h>
int main(){
	double x, y;
	printf("Enter your x coordinate: ");
	scanf("%lf", &x);
	printf("Enter your y coordinate: ");
		scanf("%lf", &y);
	if(x>0 && y>0){
		printf(" 1 ");
	}
    else{ 
        if(x<0 && y>0){
		printf(" 2");
	} else if(x<0 && y<0){
		printf(" 3");
	} else if(x>0 && y<0){
		printf(" 4");
	} else {
		printf(" 0");
	}
    }
    return 0;	
	}

