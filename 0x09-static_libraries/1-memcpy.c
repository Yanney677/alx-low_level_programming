#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory area where is stored or filled
 *@src: memory area where it is filled
 *@n: number of bytes filled
 *
 *Return: return the pointer to the n byted dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
		int s = 0;
		int h = n;

		for (; s < h; s++)
		{
			dest[s] = src[s];
			n--;
		}
		return (dest);
}
