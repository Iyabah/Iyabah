#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	char nameSurname[100];
	char newArray[100];
	char *ptr;
	ptr=nameSurname;
	
	ptr = (char *) malloc(5*sizeof(char));
		
	printf("enter name and surname ");
	scanf("%s",ptr);
	

	strcpy(newArray,ptr);
	printf("\n new array : %s",newArray);
	
	return 0;
	
} 
