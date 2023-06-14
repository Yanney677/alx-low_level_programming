#include "main.h"
#include <stdlib.h>
/**
 * argstostr -  concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer of an array of char, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, m = 0, s = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			s++;
	}
	s += ac;

	ptr = malloc(sizeof(char) * (s + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[m] = av[i][j];
			m++;
		}
	if (ptr[m] == '\0')
	{
		ptr[m++] = '\n';
	}
	}
	return (ptr);
}
