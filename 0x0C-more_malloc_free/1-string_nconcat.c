#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates n bytes of s1 to another s2
 * @s1: string to apprend
 * @s2: string to concatenate
 *@n: number of bytes
 *
 * Return: pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, m = 0, k = 0;
	char *s;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[m])
		m++;

	if (n >= m)
		k = i + m;
	else
		k = i + n;

	s = malloc(sizeof(char) * k + 1);

	if (s == NULL)
		return (NULL);

	m = 0;
	while (j < k)
	{
		if (j <= i)
			s[j] = s1[j];

		if (j >= i)
		{
			s[j] = s2[m];
			m++;
		}
		j++;
	}
	s[j] = '\0';
	return (s);
}
