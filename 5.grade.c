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
	printf("enter your mark\t");
	scanf("%f",&mark);
	if(mark>=90 && mark==100){
		printf("you have obtained A");
	}else if(mark>=80 && mark<90){
		printf("you have obtained B");
	}else if(mark>=70 && mark<80){
		printf("you have obtained C");
	}else if(mark>=60 && mark<70){
		printf("you have obtained D");
	}else if(mark>=50 && mark<60){
		printf("you have obtained E");
	}else if(mark<50){
		printf("failed");
	}else{
		printf("invalid entry");
	}
	return EXIT_SUCCESS;
}
