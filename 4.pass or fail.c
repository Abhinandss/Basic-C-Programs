/*
 ============================================================================
 Name        : pass.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	setbuf(stdout,NULL);
	printf("enter your mark\t");
	scanf("%f",&mark);
	if(mark>100){
		printf("invalid entry");
	}else if(mark<50){
		printf("failed");
	}else{
		printf("passed");
	}
	return EXIT_SUCCESS;
}
