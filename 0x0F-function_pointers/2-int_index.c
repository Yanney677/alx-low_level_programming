#include "function_pointers.h"
/**
 * int_index - searches for an integers in the array of integers
 * @array: array of integers
 * @size: size of elements in array
 * @cmp: pointer to the function to be used to compare values
 * Return: if no element matches, return -1 otherwise
 * if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}
	return (-1);
}

