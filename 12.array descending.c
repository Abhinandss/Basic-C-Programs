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
	int n,i,j,a[100],temp;
	setbuf(stdout,NULL);
	printf("enter the size of an array\t");
	scanf("%d",&n);
	printf("enter the values of an array\t");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("sorted array:\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return EXIT_SUCCESS;
}
