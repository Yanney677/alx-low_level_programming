#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int x;
	int w;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (w = 0; s[x] != '\0'; x++)
	{
		for (w = 0; w < 52; w++)
		{
			if (s[x] == data1[w])
			{
				s[x] = datarot[w];
				break;
			}
		}
	}
	return (s);
}

