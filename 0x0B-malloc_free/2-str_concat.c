#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concate two string
 * @s1: string 1
 * @s2: string 2
 *
 * Return: always returns the concated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *concate;
	int n, x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	n = 0;
	x = 0;
	while (s1[n] != '\0')
		n++;
	while (s2[x] != '\0')
		x++;
	concate = malloc(sizeof(char) * n + x + 1);

	if (concate == NULL)
		return (NULL);
	n = 0;
	x = 0;
	while (s1[n] != '\0')
	{
		concate[n] = s1[n];
		n++;
	}
	while (s2[x] != '\0')
	{
		concate[x] = s2[x];
		n++, x++;
	}
	concate[n] = '\0';
	return (concate);
}
