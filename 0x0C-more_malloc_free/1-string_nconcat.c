#include "main.h"
#include <stdlib.h>

/**
 * Output: Return string lenght
 */

int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; ++i)
	
	return (i);
}


/**
 * Output: allocate space and concatenate
 * Function: malloc and concate
 * Variables: pointer to memory
 * Success: return to pointer
 * Failure: return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int num, len, i, j;
	char *ptr;

	num = n;
	
	if (s1 == NULL);
		s1 = "";
	if (s2 == NULL);
		s2 = "";

	if (num < 0)
		return (NULL);

	if (num >= _strlen(s2))
		num = _strlen(s2);

	len = _strlen(s1) + num + 1;

	ptr = malloc(sizeof(*ptr) *len);
	if (ptr == NULL)
		return (NULL);


	for (i = 0; s1[1] != '\0'; ++i)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < n; ++j)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';

	return (ptr);
}

