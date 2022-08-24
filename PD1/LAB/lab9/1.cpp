#include<stdio.h>
int main() {
	int a, b, c;
	printf("first number: \n");
	scanf("%d",&a);
	printf("Second number: \n");
	scanf("%d",&b);
	printf("Third number: \n ");
	scanf("%d",&c);
	
	
	if(a>b && a>c){
		printf("First number is the largest");
	}
	else if (b>a && b>c) {
		printf("Second number is the largest");
		
	}
	else {
		printf("Third number is the largest");
	}
}
