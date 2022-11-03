#include "function_pointers.h"
/**
 * array_iterator - a function that give the parametre of each element
 * @array: its the array
 * @size: its the size of the array
 * @action: it is the pointer of the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
