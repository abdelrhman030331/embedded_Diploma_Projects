/*
 ============================================================================
 Name        : ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	float x,y;  // define variables
	printf("Enter two number: "); /* prints a message for user  */
	fflush(stdout); fflush(stdin);
	scanf("%f %f",&x,&y);
	printf("Product: %f",x*y); // to Multiply two  Numbers
}
