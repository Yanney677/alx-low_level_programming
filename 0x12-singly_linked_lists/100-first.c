#include <stdio.h>

/**
 * print_main - a function that executed or print before
 * the main function
 * Return: void
 */

void __attribute__ ((constructor)) print_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
