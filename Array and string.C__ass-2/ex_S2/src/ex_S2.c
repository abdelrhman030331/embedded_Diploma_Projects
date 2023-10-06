/*
 ============================================================================
 Name        : ex_S2.c
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
	char a[100];
	int i;
	printf ("Enter a string:");
	fflush(stdout); fflush (stdin);
	gets(a);
	fflush(stdout); fflush (stdin);
	for(i=0;i<100&&a[i]!=0;i++)
	{
	}
	printf("length of string :%d",i);
	return 0;
}
