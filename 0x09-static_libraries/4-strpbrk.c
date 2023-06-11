#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string 1
 * @accept: accept the second string
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int m;


	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
		if (*s == accept[m])
		return (s);
		}
	s++;
	}

	return ('\0');
}

