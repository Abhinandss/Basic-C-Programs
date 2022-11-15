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
	int i,ln,num,mux;
	setbuf(stdout,NULL);
	printf("enter the number whose multiplication table is needed\t");
	scanf("%d",&num);
	printf("enter the limit\t");
	scanf("%d",&ln);
	for(i=1;i<=ln;i++){
		mux=(i*num);
		printf("%d*%d=%d\n",i,num,mux);
	}
	return EXIT_SUCCESS;
}
