#include "main.h"

/**
 * Function that prints 10 times the numbers
 * from 0 t0 14
 * use putchar 3 times
 */

void more_numbers(void)
{
	int i;

	for(i = 0, i <= 14, i++)
		_putchar('0' + i, more_numbers);
	 _putchar('\n');
}
