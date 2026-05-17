#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers containing a range of values.
 * @min: The starting minimum value (included).
 * @max: The ending maximum value (included).
 *
 * Return: A pointer to the newly created integer array,
 *         or NULL if min > max or if malloc fails.
 */
int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
