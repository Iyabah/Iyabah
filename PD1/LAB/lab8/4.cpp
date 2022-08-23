#include<stdio.h>
int main(){
	float temp;
	printf("enter temperature: \n");
	scanf("%f",&temp);
	
	if(temp>0) {
		printf("temperature is above freezing point ");
		
	}
	else {
		printf("temperature is below freezing point ");
		
	}
}
