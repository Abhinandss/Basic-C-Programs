/*
 ============================================================================
 Name        : multiplication.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n,mul;
	setbuf(stdout,NULL);
	printf("enter a number\t");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		mul=i*n;
		printf("%d*%d=%d\n",i,n,mul);
	}
	return EXIT_SUCCESS;
}
