#include<stdio.h>

int main(){
	
	int n;
	
	printf("enter value:");
	scanf("%d",&n);
	
	int i,arr[n];
	int *parr;
	
	parr=arr;
	
	printf("\n");
	
	for(i=0 ;i<n ;i++){
		printf("%d. enter the elements: ",i+1);
		scanf("%d",parr+i);
	}
	
	printf("\n");
	
	for(i=0;i<n;i++){
		printf("%d. elements = %d\n",i+1,*(parr+i));
	}
		
	return 0;
}