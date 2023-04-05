#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: destination string
 *@src: source string
 *@n: number of bytes
 *
 *Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int i = n;

	for (; x < i; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}


