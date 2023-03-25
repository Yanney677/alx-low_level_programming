#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long q, max_s;
	long number = 612852475143;
	double square = sqrt(number);

	for (q = 1; q <= square; q++)
	{
	if (number % q == 0)
	{
	max_s = number / q;
	}
	}
	printf("%ld\n", max_s);
	return (0);
}

