#include <stdio.h>


struct student
{
	
	int number;
    char name[20];
    char surname[20];
    int midtermGrade;
    int finalGrade;
}s[3];

int main(){
	
	printf("enter student info:");
	
	for(int i=0;i<2;i++){
		
		printf("\n");
		
		printf("\n%d. student number: ",i+1);
		scanf("%d",&s[i].number);
		
		printf("\nStudent name: ");
		scanf("%s",s[i].name);
		
		printf("\nStudent surname: ");
		scanf("%s",s[i].surname);
		
		printf("\nmidterm mark: ");
		scanf("%d",&s[i].midtermGrade);
		
		printf("\nFinal mark: ");
		scanf("%d",&s[i].finalGrade);
		
	}
		printf("\n----Student info----");
	for(int j=0; j<2; ++j)
    {
    
        printf("\n\nStudent number= %d ",s[j].number);
        printf("\nName:");
        puts(s[j].name);
        printf("Surname: ");
        puts(s[j].surname);
        printf("Midterm mark: %d",s[j].midtermGrade);
        printf("\nFinal mark: %d",s[j].finalGrade);
        
      
        printf("\n----------------");
        
    }
	
	return 0;
}
