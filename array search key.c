/*
 ============================================================================
 Name        : array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100],i,n,key,flag=0;
	setbuf(stdout,NULL);
	printf("enter the array limit\t");
	scanf("%d",&n);
	printf("enter the array elements\t");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("please enter the search key\t");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(key==a[i]){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("search key found at location %d",i+1);
	}else{
		printf("search key not found");
	}
	return EXIT_SUCCESS;
}
