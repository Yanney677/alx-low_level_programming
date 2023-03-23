#include "main.h"

/**
 * main - checks for positive or negative numbers
 *
 * Return: always returns 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
