/*
 ============================================================================
 Name        : ex_A1
 Author      : Abdelrhman Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdlib.h>
#include <stdio.h>
int main() {
	float a[20];                          // define variables
	int n ;                               //number of input date from user
	float sum=0.0;
	printf("Enter the numbers of data:"); /* prints a message for user  */
	fflush(stdout); fflush(stdin);
	scanf("%d", &n);
	for (int i=0;i<n;i++)
	{
		printf("Enter number : ");
		fflush(stdout); fflush(stdin);
		scanf("%f",&a[i]);

	}

	for (int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf ("Average = %f",(sum/n));
}
