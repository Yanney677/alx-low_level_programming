#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string haystack
 * @haystack: the complete string
 * @needle: substring
 * Return: pointer to address of  the beginning of located substring,
 * otherwise NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;


		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}


		if (*y == '\0')
			return (haystack);
	}

	return (0);
}
