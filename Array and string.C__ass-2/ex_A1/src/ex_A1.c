/*
 ============================================================================
 Name        : sequence_pro.c
 Author      : Abdelrhman Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	float a[2][2],b[2][2], sum[2][2];   // define variables
	int i,j;                  // define variables
	printf("Enter the elements of 1st matrix\n"); /* prints a message for user  */
	fflush(stdout); fflush(stdin);
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("Enter a%d%d :",(i+1),(j+1));
			fflush(stdout); fflush(stdin);
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter the elements of 2st matrix\n"); /* prints a message for user  */
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("Enter b%d%d :",(i+1),(j+1));
			fflush(stdout); fflush(stdin);
			scanf("%f",&b[i][j]);
		}
	}
	printf("Sum of matrix :\r\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%.1f\t",sum[i][j]);
		}
		printf("\n");
	}
}
