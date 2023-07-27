#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: min number of elements
 * @max: max number of elements
 * Return: array pointer address
 *         NULL if it fails
 */
int *array_range(int min, int max)
{
	int b, *array;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (b = 0; min <= max; b++)
	{
		array[b] = min;
		min++;
	}
	return (array);
}
