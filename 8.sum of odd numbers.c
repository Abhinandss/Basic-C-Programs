/*
 ============================================================================
 Name        : sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,sum=0;
	setbuf(stdout,NULL);
	printf("enter the limit\t");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
        sum=sum+i;
		i=i+1;
	}
	printf("sum of odd numbers= %d",sum);
	return EXIT_SUCCESS;
}
