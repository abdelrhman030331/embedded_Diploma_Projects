/*
 ============================================================================
 Name        : ex2.c
 Author      : Abdelrhman Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int x;
	printf("enter an integer number ="); /* prints a message for user */
	fflush(stdout); fflush(stdin);
	scanf("%d",&x);
	printf("You entered: %d",x);

}
