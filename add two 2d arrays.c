/*
 ============================================================================
 Name        : add.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,j,a[100][100],b[100][100],c[100][100];
	setbuf(stdout,NULL);
	printf("enter the size of arrays\t");
	scanf("%d",&n);
	printf("enter the values of array 1\t");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the values of array 2\t");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("sum of two array is %d");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("")
		}
	}
	return EXIT_SUCCESS;
}
