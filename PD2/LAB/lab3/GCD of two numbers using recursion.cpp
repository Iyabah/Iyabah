#include<stdio.h>
int gcd(int x,int y);

int main(void)
{  
  int num1,num2,result;
  printf("enter the first number:");
  scanf("%d",&num1);
  
  printf("enter the second number:");
  scanf("%d",&num2);
  
  result=gcd(num1,num2);
  
  printf("the greatest common divisor of the two numbers=%d",result);
	
	
	
}
int gcd(int x,int y)
{
	if(y==0) return x;
	
	return gcd(y,x%y);
	
	
	
}
