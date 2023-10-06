/*
 ============================================================================
 Name        : ex_A5.c
 Author      : Abdelrhman Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[10],x;
	printf("Enter no of elements :");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x);
	int i;
	for( i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	int temp;
	printf("Enter the elements to be searched :");
	fflush(stdout); fflush(stdin);
	scanf("%d",&temp);
	for( i=0;i<x;i++)
	{
		if (a[i]==temp)
			break;
	}
	printf("Number found at the location = %d ",(i+1));
	return 0;
}
