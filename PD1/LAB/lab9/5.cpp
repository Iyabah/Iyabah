#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int x,n,fact,i,j;
	float sum,pay,payda;
	printf("enter value of x/n");
	scanf("%d",&x);
	printf("enter value of n/n");
	scanf("%d",&n);
	sum=1;
	for(i=1; i<=n; i++){
		pay=pow(x,i), fact=1;
		for(j=2; j<=i; i++){
			fact=fact*j;
		}
		payda=  fact,sum =sum + (pay/payda);
		printf("%f is the sum",sum);
		getch();
		return 0;
	}
}
