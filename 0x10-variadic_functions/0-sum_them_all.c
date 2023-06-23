#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of argument
 *
 * Return: the sum of its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int j = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (; j < n; j++)
		sum += va_arg(ptr, int);

	va_end(ptr);

	return (sum);
}
