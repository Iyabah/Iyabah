#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int x,largest=0;
	int *p;
	p=&x;
	
	printf("how many elements : ");
	scanf("%d",&x);
	
	p = (int *)calloc(x, sizeof(int));
	
	for(int i=0;i<x;i++){
		
		printf("enter elements: ",i);
		scanf("%d",p);
		
			
	for (int j=0;j<x;j++){
		if(p[j]>largest){
			largest=p[j];
		}
			else continue;
	
	}
}
	
	printf("\n largest element : %d",largest);
	
	return 0;
}
