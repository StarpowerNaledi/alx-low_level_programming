#include "main.h"

/**
 * Write a funtion that print 0-9
 * does not print 2 and 4
 * only use putchar twice
 */

void print_most_numbers(void)
{
	int i;
		for( i = 0 && i != 2 && i != 4, i <= 9,i++)
			_putchar('0' + i);
		_putchar('\n');
}
