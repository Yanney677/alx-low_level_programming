#include <stdio.h>
/**
 * main - is the entry point of any program
 * Return: ends the execution of a function
 */
int main(void)
{
	char x;
	int y;
	long int a;
	long long int b;
	float c;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(b));
print ("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(c));
return (0);
}
