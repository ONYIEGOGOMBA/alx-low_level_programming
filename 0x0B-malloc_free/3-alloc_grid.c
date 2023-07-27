#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **ali;
	int b, g;

	if (height <= 0 || width <= 0)
		return (NULL);

	ali = (int **) malloc(sizeof(int *) * height);

	if (ali == NULL)
		return (NULL);

	for (b = 0; b < height; b++)
	{
		ali[b] = (int *) malloc(sizeof(int) * width);
		if (ali[b] == NULL)
		{
			free(ali);
			for (g = 0; g <= b; g++)
				free(ali[g]);
			return (NULL);
		}
	}

	for (b = 0; b < height; b++)
	{
		for (g = 0; g < width; g++)
		{
			ali[b][g] = 0;
		}
	}
	return (ali);
}
