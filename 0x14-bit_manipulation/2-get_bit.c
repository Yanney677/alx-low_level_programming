#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @n: unsigned long int user_input
 * @index: index of the bit
 *
 * Return: the value of the bit at index, otherwise
 * -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j = 0;

	if (index < 64 && n == 0)
		return (0);

	for (; j <= 63; n >>= 1, j++)
	{
		if (index == j)
		{
			return (1 & n);
		}
	}

	return (-1);
}
