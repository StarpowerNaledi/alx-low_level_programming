#include <stdio.h>

/* Program prints alphabet
 * In lowercase and then in uppercase 
 */

int main(void)
{
	/* Declare variables
	 * to be used in code*/
	char c, b;

	/*Function and statement that print in lowercase
	 *c++ is an increment funtion */
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	/*Function and statement that print in uppercase
	 *b++ is an increment funtion */
	for (b = 'A'; b <= 'Z'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
