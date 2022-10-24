#include "main.h"
/**
 * **alloc_grid - return pointer of two dimensional
 * @width: it is an integer called 'width'
 * @height: it is an integer called 'height'
 * Return: Pointer or null
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(height * sizeof(int));
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			while (i >= 0)
			{
				free(p[i]);
				i--;
			}
			free(p);
			return (NULL);
		}
	}

	return (p);
}
