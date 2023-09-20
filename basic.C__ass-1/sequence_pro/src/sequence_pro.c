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

int main() {
	int a ;  // define variables
	printf("Enter value of matrixs:"); /* prints a message for user  */
	fflush(stdout); fflush(stdin);
	scanf("%d", &a);
	for (int i=0;i<=a;i++)
	{
		for (int x=0;x<=a;x++)
		{
			if (x>=i) printf("%d ",x);
		}
		printf("\n");
	}
}
