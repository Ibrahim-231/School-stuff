#include <stdio.h>
int main(){
	int i, j, s;
	for(i=1;i<=69;i++){
		for(j=1;j<=69;j++){
			s =i*j;
			printf("%d x %d = %d\n",i,j,s);
		}
		printf("\n");
	}return 0; 
}
