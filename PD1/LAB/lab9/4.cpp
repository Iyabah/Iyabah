#include<stdio.h>
int main() {
	int r,n,temp,sum=0;
	printf("enter number: \n");
	scanf("%d",&n);
	temp=n;
	while(n>0) {
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(temp==sum){
		printf("number is palindrome");
	}
	else {
		printf("num is not palindrome");
	}
}
