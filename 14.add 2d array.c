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
	int n,a[50][50],b[50][50],i,j,sum=0;
	setbuf(stdout,NULL);
	printf("enter the size of the arrays\t");
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
		printf("sum of two arrays is:\n");
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				sum=a[i][j]+b[i][j];
				printf("%d	",sum);
			}
			printf("\n");
		}
	return EXIT_SUCCESS;
}
