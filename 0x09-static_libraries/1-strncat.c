
#include "main.h"

/**
 * _strncat - function concatenate two strings
 * using at most n bytes from src
 * @dest: destination
 * @src: source
 * @n: number of bytes used from the src
 * Return: the pointer to the dest
 */

char *_strncat(char *dest, char *src, int n)
{

		int i = 0;
		int j = 0;

		while (dest[i] != '\0')
		{
			i++;
		}

		while (j < n && src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';

		return (dest);
}
