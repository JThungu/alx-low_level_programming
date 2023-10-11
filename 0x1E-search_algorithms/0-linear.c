#include "search_algos.h"
/**
 * linear_search - looks for a value in a sorted array
 *
 * @array: an array of integers
 * @size: size of array of integers
 * @value: value to search
 * Return: index value or -1 if absent
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, *array);
		if (*array == value)
			return (i);
		array++;
	}
	return (-1);
}
