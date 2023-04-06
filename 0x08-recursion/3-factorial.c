#include "main.h"
/**
 * factorial - the function print a given number
 * @n: number of factorial to use
 * Return: always returns 0 or -1
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 1)
		return (-1);
	return (n * factorial(n - 1));
}
