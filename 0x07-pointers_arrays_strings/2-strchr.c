#include "main.h"
#define NULL 0

/**
 * Locate character in a string
 * @param s: string to search
 * @param c: character to find
 * @return: pointer to first occurrence of c in s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c) /* find match */
		i++;

	if (s[i] == c) /* if match, assign to address */
		return (&s[i]);
	else
		return (NULL);
}
	
