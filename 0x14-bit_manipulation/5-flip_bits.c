#include "main.h"
/**
 * flip_bits - number of bits to the flip
 * @n: the first number passed
 * @m: the second number passed
 * Return: result of the number of bits flip passed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a, flip_bits = 0;
	unsigned long int b = sizeof(unsigned long int) * 8;

	for (a = 0; a < b; a++)
	{
		if ((n & 1) != (m & 1))
			flip_bits += 1;
		m = m >> 1;
		n = n >> 1;
	}
	return (flip_bits);
}
