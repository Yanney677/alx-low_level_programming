#include "variadic_functions.h"

/**
 *sum_them_all - calculates the sum of its parameters
 *@n: number of arguments
 *Return: returns the resulting sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list list;
	for (i = 0; i < n; i++)
	sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
