#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase character
 * @c: user_input character to be checked
 * Return: 1 if is an uppercase character, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
