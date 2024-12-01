#include <stdio.h>
int main(){
	float num1, num2;
	printf("Enter 1st number: \n");
	scanf("%f", &num1);
	printf("Enter 2nd number: \n");
	scanf("%f", &num2);
	printf("Enter operation(+, -, *, /): \n");
	char c;
	scanf(" %c", &c);
	switch(c){
		case '+':
		printf("%.2f + %.2f = %.2f", num1, num2, num1+num2);
		break;
		case '-':
		printf("%.2f - %.2f = %.2f", num1, num2, num1-num2);
		break;
		case '*':
		printf("%.2f * %.2f = %.2f", num1, num2, num1*num2);
		break;
		case '/':
		if(num2 !=0){
		printf(" %.2f / %.2f = %.2f", num1, num2, num1/num2);
	}else{
		printf("Error");
	}
		break;
		default:
		printf("Invalid input");
	}
	return 0;
}
