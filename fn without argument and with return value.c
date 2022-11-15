/*
 ============================================================================
 Name        : fn.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum();
int main(void) {
	int c;
	c=sum();
	printf("%d",c);
	return EXIT_SUCCESS;
}


int sum()
{
	int a,b,sum;
	setbuf(stdout,NULL);
	printf("enter two numbers\t");
	scanf("%d%d",&a,&b);
	sum=a+b;
	return sum;
}
