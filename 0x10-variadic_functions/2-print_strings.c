#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list letters;
	char *str;
	unsigned int s = 0;

	va_start(letters, n);

	for (; s < n; s++)
	{
		str = va_arg(letters, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL && s != (n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(letters);

}
