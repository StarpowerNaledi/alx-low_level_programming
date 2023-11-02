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
	void *ptr;
	
	ptr = malloc(b);

	if (!ptr)
		exit (98);
	
	return (ptr);


}



