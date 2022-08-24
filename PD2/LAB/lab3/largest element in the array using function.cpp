#include <stdio.h>

int largest(int[], int n, int);   

int main(){
	
	int n, A[100];
	printf("Enter size of the array: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("enter elements of the array: ",i);
		scanf("%d", &A[i]);
	}
	
	int enb=A[0];
	enb=largest(A,n-1,enb);
	
	printf("\nthe largest element of the array is: %d",enb);

}

int largest(int x[], int y, int z){
	
 	 if(y<0)
 	 return z;
  
 	 if(x[y]>z)
 	 {
 	 	z=x[y];
  	
	  }
 	 return largest(x,y-1,z);
	
}
