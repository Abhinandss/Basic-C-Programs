/*
 ============================================================================
 Name        : grade.c
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
	printf("enter the total mark percentage\t");
	scanf("%f",&mark);
	if(mark>=90 && mark<=100){
		printf("you have obtained grade A");
	}else if(mark>=80 && mark<=89){
		printf("you have obtained grade B");
	}else if(mark>=70 && mark<=79){
		printf("you have obtained grade C");
	}else if(mark>=60 && mark<=69){
		printf("you have obtained grade D");
	}else if(mark>=50 && mark<=59){
		printf("you have obtained E");
	}else if(mark<50){
		printf("you have failed the exam");
	}else if(mark>100){
		printf("you have chosen an invalid mark percentage!!");
	}
	return EXIT_SUCCESS;
}
