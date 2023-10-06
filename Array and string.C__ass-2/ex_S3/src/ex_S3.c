/*
 ============================================================================
 Name        : ex_S3.c
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
	printf("Enter a string: ");
	fflush(stdout);
	fgets(a, sizeof(a), stdin);

	int len = strlen(a);
	if (len > 0 && a[len - 1] == '\n') {
		a[len - 1] = '\0'; // Remove the newline character if present
	}

	int i, j;
	len = strlen(a); // Recalculate the length of the modified string

	char temp;
	for (i = 0, j = len - 1; i < j; i++, j--) {
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

	printf("Reversed string: %s\n", a);

	return 0;
}
