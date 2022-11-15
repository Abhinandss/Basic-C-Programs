/*
 ============================================================================
 Name        : array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n,a[100],b[100],temp;
	setbuf(stdout,NULL);
	printf("enter the size of arrays\t");
	scanf("%d",&n);
	printf("enter the values of array 1\t");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the values of array 2\t");
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
	printf("swapped arrays are:\n\tarray 1:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n array 2:");
	for(i=0;i<n;i++){
		printf("%d ",b[i]);
	}
	return EXIT_SUCCESS;
}
