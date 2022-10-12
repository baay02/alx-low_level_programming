#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: input array
 * @size: size of an array
 * @cmp: comparison function
 * Return: index of an int found in cmp
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i])
						return (i);
						i++;
			}
		}
	}
	return (-1);
}

