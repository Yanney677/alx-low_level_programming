#include <stdio.h>
/**
 * main - prints its name, followed by a new line
 * @argc: arguments count
 * @argv: arguments vector
 * Return: always 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
