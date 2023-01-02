#include "search_algos.h"
/**
 * linear_search - this function is a searching function based on linear search
 * @array: this is the array that we have to search in
 * @size: this is the size of the array that we have
 * @value: this is the value that we are searching for
 * Return: always the index of the value or -1 if the value is not in the array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int j = 0;
	if (array != NULL)
	{
		while (i < size - 1)
		{
			printf("Value checked array[%d] = [%d]\n", j, array[j]);
			if (array[j] == value)
			{
				return (j);
			}
			i++;
			j++;
		}
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
	}
	return (-1);
}
