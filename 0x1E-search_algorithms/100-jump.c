#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using a jump search.
 * @array: First element of the array to search in.
 * @size: The number of element  of an array.
 * @value: The value to search for.
 *
 * Return: The index of the value in the array, otherwise -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump_step, x = 0, y = 0;

	if (!array)
		return (-1);
	jump_step = (size_t)sqrt(size);
	while ((y < size) && (*(array + y) < value))
	{
		printf("Value checked array[%d] = [%d]\n", (int)y, *(array + y));
		x = y;
		y += jump_step;
		if (x >= size)
			return (-1);
	}
	printf("Value found between indexes [%d] and [%d]\n", (int)x, (int)y);
	y = y >= size ? size - 1 : y;
	for (; (x <= y) && (*(array + x) <= value); x++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)x, *(array + x));
		if (*(array + x) == value)
			return ((int)x);
	}
	return (-1);
}
