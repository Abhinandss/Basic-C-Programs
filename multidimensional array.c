/*
 ============================================================================
 Name        : multidimensional.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int r,c,i,j,a[100][100];
	setbuf(stdout,NULL);
	printf("enter the number or rows and columns of the array\t");
	scanf("%d%d",&r,&c);
	printf("enter the values of array\t");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("entered values are:\n ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d	",a[i][j]);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
