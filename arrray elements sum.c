/*
 ============================================================================
 Name        : arrray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n,b[100],sum=0;
	setbuf(stdout,NULL);
	printf("enter the array limit\t");
	scanf("%d",&n);
	printf("enter the array elements\t");
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		sum=sum+b[i];
	}
	printf("the sum is: %d",sum);
	return EXIT_SUCCESS;
}
