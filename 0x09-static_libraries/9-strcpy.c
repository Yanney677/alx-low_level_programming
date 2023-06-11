#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: the pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;


	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; j < i ; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}

