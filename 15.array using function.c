#include <stdio.h>
#include <stdlib.h>
int* getArray(int n,int *a);
void displayArray(int *ptr,int n);
int main(void) {
	int  n,*ptr,a[50];
	setbuf(stdout,NULL);
	printf("enter the size of the array\t");
	scanf("%d",&n);
	ptr=getArray(n,a);
	displayArray(ptr,n);
	return EXIT_SUCCESS;
}

int* getArray(int n,int *a){
	int i;
	setbuf(stdout,NULL);
	printf("enter the values of the array\t");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	return a;
}

 void displayArray(int *ptr,int n){
	 int i;
	setbuf(stdout,NULL);
	printf("the array values are:\n");
	for(i=0;i<n;i++){
		printf("%d  ",ptr[i]);
	}
}
