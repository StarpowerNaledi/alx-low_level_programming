#include "main.h"

/**
 *_strcat - concatenates  the string pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char *src)
{

	int len = 0, i = 0;

	while (dest[len++])
		i++;

	for (len = 0; src[len]; len++)
		dest[i++] = src[len];

	return (dest);
}
