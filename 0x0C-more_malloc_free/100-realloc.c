#include <stdlib.h>
#include "main.h"

/**
 **_realloc - reallocates a memory block
 * @ptr: pointer to the allocated memory
 * @old_size: size of the allocated memory for old
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	char *old_ptr;
	unsigned int n;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	s = malloc(new_size);
	if (!s)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (n = 0; n < new_size; n++)
			s[n] = old_ptr[n];
	}

	if (new_size > old_size)
	{
		for (n = 0; n < old_size; n++)
			s[n] = old_ptr[n];
	}

	free(ptr);
	return (s);
}

