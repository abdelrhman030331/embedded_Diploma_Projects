/*
 ============================================================================
 Name        : ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int x,y;  // define variables
	printf("Enter two integers: "); /* prints a message for user  */
	fflush(stdout); fflush(stdin);
	scanf("%d %d",&x,&y);
	printf("Sum = %d",x+y);

}
