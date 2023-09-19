/*
 ============================================================================
 Name        : ex6.c
 Author      : Abdelrhman Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	float a,b;  // define variables
	printf("Enter value of a:"); /* prints a message for user  */
	fflush(stdout); fflush(stdin);
	scanf("%f",&a);
	printf("Enter value of b:"); /* prints a message for user  */
	fflush(stdout); fflush(stdin);
	scanf("%f",&b);
	float temp;
	swap(a,b);
	printf("After swapping, value of a = %f \nAfter swapping, value of b = %f",a,b); // to swap two elements
}
