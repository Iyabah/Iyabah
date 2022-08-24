#include<stdio.h>
#include<conio.h>
float bmi(float,float);
int main()
{
	
	float h, w, res;
	
	printf("enter height : \n");
	scanf("%f",&h);
	
	
	printf("entert weihght : \n");
	scanf("%f",&w);
	
		res = bmi(h,w);
	printf("Your BMI is : %f\n",res);	
	if(res<18){
		printf("Status: Weak");
	}else if(res>=19 && res<=25){
		printf("Status: Normal");
	}else if(res>=26 && res<=30){
		printf("Status: Fat");
	}else {
		printf("Status: Obese");
	}

		return 0;
	
}
float bmi(float h, float w)
{
	float result;
	result = w / (h*h);
	return result;
}
