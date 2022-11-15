/*
 ============================================================================
 Name        : even.c
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
	printf("enter the size of an array\t");
	scanf("%d",&n);
	printf("enter the values of array\t");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			count=count+1;
			continue;
		}
	}
	printf("number of even numbers in the array is %d",count);
	return EXIT_SUCCESS;
}
