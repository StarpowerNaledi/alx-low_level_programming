#include "main.h"
#include <stdlib.h>

/**
 * Output: Allocate memory
 * Function: malloc
 * Success: return pointer to memory
 * Failure: return 98
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;
	
	pointer = malloc(b);

	if (!pointer)
		exit (98);
	
	return (pointer);


}



