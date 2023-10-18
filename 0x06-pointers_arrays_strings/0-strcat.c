#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * Function: Concatenate
 * two strings
 * Return: *dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0;
	while(dest[len] != '\0')
	{
	len++;
	}

	int i = 0;
	while(src[i] != '\0')
	{
	dest[len + i] = src[i];
	i++;
	}

	dest[len + i] = '\0';

	return dest;

}
