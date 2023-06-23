#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *str, *separator = "";

	va_list sort;

	va_start(sort, format);

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", separator, va_arg(sort, int));
						break;
				case 'i':
					printf("%s%d", separator, va_arg(sort, int));
						break;
				case 'f':
					printf("%s%f", separator, va_arg(sort, double));
						break;
				case 's':
					str = va_arg(sort, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
						break;
					default:
					j++;
					continue;
			}
			separator = ", ";
			j++;
		}
	}

	printf("\n");
	va_end(sort);
}

