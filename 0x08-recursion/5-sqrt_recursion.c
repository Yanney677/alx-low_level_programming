#include "main.h"
#include <stdio.h>

/**
 * _sqrt - recurses to find the natural square root of a number
 * @n: number to iterate in the qaure root
 * @i: recursive number
 */

int _sqrt(int n, int i)

/**
 * _sqrt_recursion: print the natural square root of a number
 * @n: calculated of the natural square root
 * Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));

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
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}

