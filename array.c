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
	int i,limit,a[100];
	setbuf(stdout,NULL);
	printf("enter the array limit\t");
	scanf("%d",&limit);
	printf("enter the array elements\t");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	printf("your array elements are: ");
	for(i=0;i<limit;i++){
	printf("%d	",a[i]);
	}
	return EXIT_SUCCESS;
}
