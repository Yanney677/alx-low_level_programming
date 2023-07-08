#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: number 1
 * @m: number 2
 *
 * Return: the number of bits  to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, r_val = 0;
	unsigned long int cur;
	unsigned long int e = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		cur = e >> j;
		if (cur & 1)
			r_val++;
	}

	return (r_val);

}
