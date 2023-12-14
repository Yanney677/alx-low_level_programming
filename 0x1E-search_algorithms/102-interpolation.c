#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using an interpolation search.
 * @array: The first element of the array toto search in.
 * @size: The number of element in array.
 * @value: The value to search for.
 *
 * Return: The first index of the value in the array, otherwise -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos = 0;
	double ptr;

	if (!array)
		return (-1);
	while (array[high] != array[low])
	{
		ptr = (double)(high - low) / (array[high] - array[low]);
		pos = low + (ptr * (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%d] is out of range\n", (int)pos);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (value == array[low] ? (int)low : -1);
}
