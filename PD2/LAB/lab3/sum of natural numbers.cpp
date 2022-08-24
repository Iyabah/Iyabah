#include<stdio.h>
int sum(int n); 
int main() {
	int result, number;
	printf("enter number: \n");
	scanf("%d",&number);
	result=sum(number);
	printf("sum is: %d\n",result);
}
int sum(int num) {
	if(num!=0){
		return num+sum(num-1);
	}
	else {
		return 0;
	}
}
