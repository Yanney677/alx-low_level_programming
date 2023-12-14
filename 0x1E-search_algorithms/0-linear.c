#include "search_algos.h"

/**
 * linear_search -  A function that searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: The first element of the array to search in.
 * @size: The number of element in the array.
 * @value: The value to search for.
 *
 * Return: The first index of the value in the array, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t j;

	for (j = 0; (j < size) && (array); j++)
	{
		if (*(array + j) == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)j, *(array + j));
			return (j);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int)j, *(array + j));
		}
	}
	return (-1);
}
