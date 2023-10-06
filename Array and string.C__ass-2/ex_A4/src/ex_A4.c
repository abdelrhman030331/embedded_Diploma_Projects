/*
 ============================================================================
 Name        : ex_A4.c
 Author      : Abdelrhman Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[20];
	int n;
	printf ("Enter no of elements : ");
	fflush(stdout); fflush(stdin);
	scanf ("%d",&n);
	for(int i =0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int temp;
	printf ("Enter the element to be inserted :");
	fflush(stdout); fflush(stdin);
	scanf("%d",&temp);
	int index ;
	printf ("Enter the location:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&index);
	for (int i=n;i>=index-1;i--)
	{
		a[i]=a[i-1];
	}
	a[index-1]=temp;
	for (int i =0;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
