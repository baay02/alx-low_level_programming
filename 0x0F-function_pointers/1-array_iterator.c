#include "function_pointers.h"

/**
 * array_iterator - execute a function given as a parameter
 * of each element of an array
 * @array: input array
 * @size: number of elements to loop through
 * @action: action to be executed
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}

