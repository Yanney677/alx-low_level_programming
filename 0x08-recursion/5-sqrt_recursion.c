#include "main.h"

/**
 * _sqrt - recurses to find the natural square root of a number
 * @n: number to iterate in the qaure root
 * @i: recursive number
 * Return: the natural square root of a number
 */
int _sqrt(int n, int i);

/**
 * _sqrt_recursion - print the natural square root of a number
 * @n: calculated of the natural square root
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n < 1)
		return (-1);
	return (_sqrt(n, 2));

}

/**
 *_sqrt - recurses to find the natural
 * square root of a number
 * @n: number to iterate in the sqaure root
 * @i: recursive number
 *
 * Return: the natural square root of a number
 */
int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i >= n)
		return (-1);
	return (_sqrt(n, i + 1));
}

