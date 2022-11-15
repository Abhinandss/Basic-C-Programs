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
int sum(int,int);
int main(void) {
	int a,b,c;
	setbuf(stdout,NULL);
	printf("enter two numbers\t");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("sum is %d",c);

	return EXIT_SUCCESS;
}

int sum(int n1,int n2)
{
	int n3;
	n3=n1+n2;
	return n3;
}
