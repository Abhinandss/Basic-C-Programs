/*
 ============================================================================
 Name        : Greater.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,num3;
	setbuf(stdout,NULL);
	printf("enter three numbers\t");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2){
		if(num1>num3){
			printf("greatest number is %d",num1);
		}else{
			printf("greatest number is %d",num3);
		}
    }else if(num2>num3){
			printf("greatest number is %d",num2);
		}else{
			printf("greatest number is %d",num3);
		}
	return 0;
}
