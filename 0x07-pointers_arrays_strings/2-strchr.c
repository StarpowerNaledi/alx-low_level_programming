#include "main.h"

/**
 * Locate character in a string
 * @param s: string to search
 * @param c: character to find
 * @return: pointer to first occurrence of c in s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i;
	
	for(i = 0; s[i] != '\0'; i++)
	{
		if(s[i] == c)
		return (&s[i]);
	}
		return (NULL);
}
