#include "search_algos.h"

/**
 * print_array - Prints what is stored in the array.
 * @array: The first element of the array to search in.
 * @l: Left index of the array.
 * @r: Right index of the array.
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t n;

	if (array)
	{
		printf("Searching in array: ");
		for (n = l; n < l + (r - l + 1); n++)
			printf("%d%s", *(array + n), n < l + (r - l) ? ", " : "\n");
	}
}

/**
 * binary_search_index_1 - Searches a value in a sorted array using
 * a binary search.
 * @array: The first element of the array to search in.
 * @l: Left index of the array.
 * @r: Right index of the array.
 * @value: The value to search for.
 *
 * Return: The first index of the value in the array, otherwise -1.
 */
int binary_search_index_1(int *array, size_t l, size_t r, int value)
{
	size_t q;

	if (!array)
		return (-1);
	print_array(array, l, r);
	q = l + ((r - l) / 2);
	if (l == r)
		return (*(array + q) == value ? (int)q : -1);
	if (value < *(array + q))
	{
		return (binary_search_index_1(array, l, q - 1, value));
	}
	else if (value == *(array + q))
	{
		return ((int)q);
	}
	else
	{
		return (binary_search_index_1(array, q + 1, r, value));
	}
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using an exponential search.
 * @array: The first element of the array to search in.
 * @size: The number of element of an array.
 * @value: The value to search for.
 *
 * Return: The index of the value in the array, otherwise -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t r_low = 1, r_high = 2;

	if (!array || !size)
		return (-1);
	if (size < 2)
	{
		r_low = 0;
		r_high = 1;
	}
	else
	{
		while (r_low < size)
		{
			printf("Value checked array[%lu] = [%d]\n", r_low, array[r_low]);
			if (
				((array[r_low] <= value) && (array[r_high] >= value))
				|| ((r_low * 2) >= size)
				)
				break;
			r_low *= 2;
			r_high = r_high * 2 < size ? r_high * 2 : size - 1;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n", r_low, r_high);
	return (binary_search_index_1(array, r_low, r_high, value));
}
