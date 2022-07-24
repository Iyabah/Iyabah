#include<stdio.h>
#include<conio.h>
#define PI 3.141
int main ()
{
	int r;
	float area;
	printf("enter radius of the circle:\n");
	scanf("%d",&r);
	area = PI * r * r;
	printf("the area is: %0.2f",area);
	getch();
	return 0;
	

}

