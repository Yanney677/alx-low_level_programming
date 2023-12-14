#include "search_algos.h"

/**
 * print_array - Prints what is stored in an array.
 * @array: The source of the array to print.
 * @l: Left index of an array.
 * @r: Right index of an array.
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t s;

	if (array)
	{
		printf("Searching in array: ");
		for (s = l; s < l + (r - l + 1); s++)
			printf("%d%s", *(array + s), s < l + (r - l) ? ", " : "\n");
	}
}

/**
 * binary_search_index - Searches a value in a sorted array using
 * a binary search.
 * @array: First element of the array to search in.
 * @l: Left index of an array.
 * @r: Right index of an  array.
 * @value: The value to search for.
 *
 * Return: The first index of the value in the array, otherwise -1.
 */
int binary_search_index(int *array, size_t l, size_t r, int value)
{
	size_t u;

	if (!array)
		return (-1);
	print_array(array, l, r);
	u = l + ((r - l) / 2);
	if (l == r)
		return (*(array + u) == value ? (int)u : -1);
	if (value < *(array + u))
		return (binary_search_index(array, l, u - 1, value));
	else if (value == *(array + u))
		return ((int)u);
	else
		return (binary_search_index(array, u + 1, r, value));
}

/**
 * binary_search - Searches for a value in a sorted array using a binary search.
 * @array: First element of the array to search in.
 * @size: The number of element in the array.
 * @value: The value to search for.
 *
 * Return: The index of the value in the array, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	return (binary_search_index(array, 0, size - 1, value));
}
