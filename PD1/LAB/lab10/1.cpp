#include<stdio.h>
int main() {
	float A[8];
	float avg, sum;
	
	printf("enter elements of the array: \n");
	for(int i=0; i<8; i++){
		scanf("%f",&A[i]);
		sum = sum + A[i];
		avg = sum / 8;
		
		}
		printf("average of the array is:  %f",avg);
}
