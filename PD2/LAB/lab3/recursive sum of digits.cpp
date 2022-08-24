#include <stdio.h>

int sum(int x);
int main(){
	
	int n,result;
	
	printf("enter a number:");
	scanf("%d",&n);
	result=sum(n);
	
	printf("sum of the digits: %d", result);
}

int sum(int x){
	
	if(x==0)
	
	return x;
	
	return  x%10 + sum(x/10);
}
