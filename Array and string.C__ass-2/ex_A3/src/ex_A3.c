/*
 ============================================================================
 Name        : ex_A3.c
 Author      : Abdelrhman Magdy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[3][3],b[3][3];
	int row,col;
	printf("Enter rows and column of matrix:");
	fflush(stdout); fflush (stdin);
	scanf("%d %d",&row,&col);
	printf("Enter elements of matrix:\n");
	for (int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf ("Enter elements a%d%d:",(i+1),(j+1));
			fflush(stdout); fflush (stdin);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered Matrix: \n");
	for (int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf ("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for (int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	printf("Transpose of Matrix: \n");
	for (int i=0;i<col;i++)
	{
		for(int j=0;j<row;j++)
		{
			printf ("%d\t",b[i][j]);
		}
		printf("\n");
	}
	return 0;

}
