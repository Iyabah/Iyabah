#include<stdio.h>
void CountEvenNumbers(int a[], int Size);
void CountOddNumbers(int a[], int Size);
void PrintArray(int a[], int Size);
int main()
{
 int Size, i, a[10];

 printf("\n Please Enter the Size :  ");
 scanf("%d", &Size);
 printf("\n Please Enter the Elements :  ");
 for(i = 0; i < Size; i++)
 {
      scanf("%d", &a[i]);
 }
 CountEvenNumbers(a, Size);
 CountOddNumbers(a, Size); 
 return 0;
}
void CountEvenNumbers(int a[], int Size)
{
	int i, Even[10], Even_Count = 0;
	printf("\n Elements in Even Array: ");
	for(i = 0; i < Size; i ++)
	{
	 	if(a[i] % 2 == 0)
 		{
 			Even[Even_Count] = a[i];
 			Even_Count++;
		}
	}
	PrintArray(Even, Even_Count);	
	printf(" Total Number of Even Numbers = %d ", Even_Count);
}
void CountOddNumbers(int a[], int Size)
{
	int i, Odd[10], Odd_Count = 0;
	printf("\n\n Elements in Odd Array : ");
	for(i = 0; i < Size; i ++)
	{
	 	if(a[i] % 2 != 0)
 		{
 			Odd[Odd_Count] = a[i];
 			Odd_Count++;
		}
	}
	PrintArray(Odd, Odd_Count);	
	printf(" Total Number of Odd Numbers = %d ", Odd_Count);
}
void PrintArray(int a[], int Size)
{
	int i;		
 	for(i = 0; i < Size; i++)
  	{
      printf("%d \t ", a[i]);
    }
    printf("\n");
}
