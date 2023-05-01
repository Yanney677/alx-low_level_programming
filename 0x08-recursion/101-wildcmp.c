#include <stdio.h>
#include "math.h"
#include <string.h>

/**
 * wildcmp - compare two strings
 * @s1: string pointer to be  compared with s2
 * @s2: string pointer to be compared against s1
 *
 * Return: 1 if strings are considered identical, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
	}
	return (0);
}
