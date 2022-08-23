#include<stdio.h>
int main() {
	float F, C;
	printf("enter degree in farenheit: \n");
	scanf("%f",&F);
	 
	C = (F-32) * 5/9;
	printf("degree in celcýus is : %f" ,C);
}
