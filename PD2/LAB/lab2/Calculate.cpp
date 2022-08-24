#include<stdio.h>

#include<stdlib.h>
int calculate(int,int);
int main(){
	int student_count;
	int passing_grade;
	int passed;
	printf("enter the number of students: \n");
	scanf("%d",&student_count);
	printf("enter passing grades: \n");
	scanf("%d",&passing_grade);
	passed=calculate(student_count, passing_grade);
	printf("number of students passed: %d\n",passed);
	printf("number of students that failed: %d\n",student_count-passed);
	
}
int calculate(int student_count,int passing_grade)
{
	int A[100];
	int passed=0;
	int total=0;
	for(int i=0; i<student_count; i++)
	{ 
	printf("student grade: %d\n",i+1);
	scanf("%d",&A[i]);
	
		if(A[i]>passing_grade){
			passed++;
			total += A[i];
			
		}
		printf("class average= %d",total/student_count);
		return passed;
	}
	}
	
