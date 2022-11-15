/*
 ============================================================================
 Name        : character.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
	setbuf(stdout,NULL);
	printf("enter a character");
	scanf("%c",&c);
	printf("you have entered %c",c);
	return EXIT_SUCCESS;
}
