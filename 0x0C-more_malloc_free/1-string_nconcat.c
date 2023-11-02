#include "main.h"
#include <stdlib.h>

/**
 * Output: allocate space and concatenate
 * Function: malloc and concate
 * Variables: pointer to memory
 * Success: return to pointer
 * Failure: return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	void *ptr;

	ptr = malloc(sizeof(s1) + n);

	if (n >= s2)
	return (str_nconcat(s1 + s2));

	if (n  < '\0')
	return (s1);

	if (!ptr)
	return (NULL);
	
}

