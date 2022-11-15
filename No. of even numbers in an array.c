/*
 ============================================================================
 Name        : .c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,a[100],count=0;
	setbuf(stdout,NULL);
	printf("enter the size of the array\t");
	scanf("%d",&n);
	printf("enter the array elements\t");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			count=count+1;
			continue;
		}
	}
	printf("No. of even numbers in the given array is %d",count);
	return EXIT_SUCCESS;
}
