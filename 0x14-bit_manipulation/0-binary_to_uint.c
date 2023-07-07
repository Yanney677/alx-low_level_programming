#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary number.
 *
 * Return: returns unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uni_no;
	int r_val = 0, base_2;

	if (!b)
		return (0);

	uni_no = 0;

	for (; b[r_val] != '\0'; r_val++)
		;

	for (r_val--, base_2 = 1; r_val >= 0; r_val--, base_2 *= 2)
	{
		if (b[r_val] != '0' && b[r_val] != '1')
		{
			return (0);
		}

		if (b[r_val] & 1)
		{
			uni_no += base_2;
		}
	}

	return (uni_no);
}
