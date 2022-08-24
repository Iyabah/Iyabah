#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
int main(){

	char adsoyad[100];
	char yenidizi[100];
	char *ptr;
	ptr=&adsoyad;
	
	ptr = (char *) malloc(5*sizeof(char));
	printf("ad ve soyad girin ");
	scanf("%s",&ptr);
	
	strcpy(yenidizi,adsoyad);
	printf("\nyenidizi pointerina\natanmis durumu : %s",yenidizi);
	
	return 0;
} 
