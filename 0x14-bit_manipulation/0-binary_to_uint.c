#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b:  is a pointer to a string of 0 and 1 chars
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int j = 0;
	unsigned int count = 0;

	if (b == NULL)
		return (0);

	for (; b[j]; j++)
	{
		if (b[j] > '1' || b[j] < '0')
			return (0);

		count = 2 * count + (b[j] - '0');
	}

	return (count);
}
