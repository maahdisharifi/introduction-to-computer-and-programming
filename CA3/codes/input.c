#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "total.h"
char *input()
{
	int len = 0;
	int size = 1;
	char ch;
	char *str = (char*) malloc(sizeof(char));
	int counter = 1;

	while (EOF != scanf("%c", &ch) && ch != '\n')
	{
		str[len] = ch;
		len++;
		str = realloc(str, sizeof(char) *(++size));
		counter++;
	}

	str[len] = '\0';
	return str;
}