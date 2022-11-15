/*
 ============================================================================
 Name        : simple.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int p;
	float r,n,si;
	setbuf(stdout,NULL);
	printf("enter the principal amount\t");
	scanf("%d",&p);
	printf("enter the interest rate\t");
	scanf("%f",&r);
	printf("enter the number of years\t");
	scanf("%f",&n);
	si=(p*r*n)/100;
	printf("the simple interest is: %f",si);
	return EXIT_SUCCESS;
}
