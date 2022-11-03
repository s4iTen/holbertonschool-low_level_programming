#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: the array
 * @size: its the size of the array
 * @cmp: its a pointer of a function
 * Return: Always position of the int in the array or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			break;
	}
	return (i);
}