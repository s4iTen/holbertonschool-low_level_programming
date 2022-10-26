#include "main.h"
/**
 * array_range - check the code
 * @min: it is a variable called 'min'
 * @max: it is a variable called 'max'
 * Return: Always pointer or NULL
 */
int *array_range(int min, int max)
{
	int *p;
	int i;
	int j = 0;
	int k = max - min;

	if (min > max)
		return (NULL);
	p = malloc((k + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = min; i < (max + 1); i++)
	{
		p[j] = i;
		j++;
	}
	return (p);
}
