#include <stdio.h>
void get_conv(int a, float b){
	float ans;
	if (a==1)
	{
		ans =(9*b/5)+ 32;
		printf("%.2f in fahrenheit is %.2f",b ,ans);
	}
	if (a==2){
		ans = (b-32)*5/9;
		printf("%.2f in celsius is %.2f",b ,ans);
	}
	else {
		printf("Invalid input");
	
	}
	
}
int main(){
	
	int conv;
	printf("Select your coversion \n1: Celcius to Fahrenheit \n2: Fahrenheit to Celcius\n");
	scanf("%d", &conv);
	float temp;
	printf("Enter your temperature: ");
	scanf("%f", &temp);
	get_conv(conv,temp);
	return 0;
}
