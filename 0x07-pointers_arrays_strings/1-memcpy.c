#include "main.h"

/**
 * Fill memeroy with constant byte
 *
 * Return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int size = n; /* only accept positive sizes */

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			dest[i] = src[i];
	}

	return (dest);
}

