/*
 ============================================================================
 Name        : palindrome.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void) {
	int k=0,len,flag=0;
	char str[20];
	setbuf(stdout,NULL);
	printf("enter a string\t");
	scanf("%s",str);
	len=strlen(str);
	len=len-1;
	while(str[len]>str[k])
	{
         if(str[k]!=str[len])
		{
			flag=1;
			break;
		}
         k++;
         len--;
	}
	if(flag==1)
	{
	printf("not a palindrome");
	}
	else
	{
		printf("palindrome");
	}
	return EXIT_SUCCESS;
}
