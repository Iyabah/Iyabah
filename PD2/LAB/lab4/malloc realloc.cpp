#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	int n1,n2,i;
	
	printf("enter the size of the array: ");
	scanf("%d",&n1);
	
	int *ptrarray=(int *)malloc(n1*sizeof(int));
	
	for(i=0;i<n1;i++){
		
		printf("%d. enter the elements : ",i+1);
		scanf("%d",ptrarray+i);
		
	}
	
	printf("enter the new size : ");
	scanf("%d",&n2);
	
	ptrarray=realloc(ptrarray,(n2)*sizeof(int));
	
	for(i=n1;i<n2;i++){
		
		printf("%d. enter the elements : ",i+1);
		scanf("%d",ptrarray+i);
		
	}
	
	printf("\n---------------------------\n\n");
	
	for(i=0;i<n2;i++){
		
		printf("%d. eleman %d'dir \n",i+1,*(ptrarray+i));
		
	}
	
	return 0;
}
