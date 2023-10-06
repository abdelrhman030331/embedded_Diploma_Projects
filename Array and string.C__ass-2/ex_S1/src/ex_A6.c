/*
 ============================================================================
 Name        : ex_A6.c
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
	char a[100],x;
	int sum=0;
	printf ("Enter a string:");
	fflush(stdout); fflush (stdin);
	gets(a);
	printf("Enter a character to find frequency:");
	fflush(stdout); fflush (stdin);
	scanf("%c",&x);
	for(int i=0;i<strlen(a);i++)
	{
		if(x==a[i])
			sum++;
	}
	printf("Frequency of %c = %d",x,sum);
	return 0;
}
