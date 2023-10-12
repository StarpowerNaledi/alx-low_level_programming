#include <stdio.h>

/**
 * prime_factor - find and print largest prime factor
 *
 * @int highest
 * @n: 612 852 475 143
 *
 * Return: void
 */


int main(void)
{
	int i;
	int n;
	int highest;

	n = 612852475143;
	highest = 0;

	for(i = 2; i <= n; i++)
	
		if(n % i != 0)
	{
			continue;
	}
		else if(n % i == 0)
	{ 
			highest = i;
            		n = n / i;
           		i = 1;
        }
  
    printf("%lld\n", highest);

    return (0);
}
