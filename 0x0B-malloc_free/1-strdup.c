#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate string to a newlt allocated space
 * @str: string to copy
 * Return: char to newly duplicated string
 */
char *_strdup(char *str)
{
	char *s;
	int i, n = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	s = malloc(sizeof(char) * i + 1);

	if (s == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		s[n] = str[n];

	return (s);
}
