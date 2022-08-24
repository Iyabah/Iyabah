#include<stdio.h>
#define SIZE 5
int main() {
	int A[SIZE];
	int i;

	for(i=0; i<SIZE; i++){
		A[i] = i+1;
		printf("%d\n",A[i]);
	}
}
