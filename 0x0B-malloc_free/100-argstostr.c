#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of a string
 * @ac: number of arguments passed
 * @av: array of pointer
 * Return: if ac == 0, av == NULL, the function fails or
 * otherwise
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int a, b, i, n = ac;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			n++;
	}

	s = malloc(sizeof(char) * n + 1);

	if (s == NULL)
	return (NULL);

	i = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			s[i++] = av[a][b];

		s[i++] = '\n';
	}

	s[n] = '\0';

	return (s);
}
