#include "search_algos.h"
/**
 * print_array - this function print the array
 * @array: this is the array that have to be printed
 * @high: this is the upper bound
 * @low: this is the lower bound
 */
void print_array(int *array, size_t high, size_t low)
{
	if (low > high)
		return;
	printf("Searching in array: ");
	if (low == high)
	{
		printf("%u\n", array[high]);
		return;
	}

	while (low <= high)
	{
		printf("%u", array[low]);
		if (low != high)
			printf(", ");
		low++;
	}
	printf("\n");
}
/**
 * binary_search_recursive - this func search the value and it based on
 * Binary search and it works with recursion
 * @array: this is the array
 * @value: this is the value that we are looking for
 * @low: this is the lower bound of array
 * @high: this is the higher bound of array
 * Return: the position of the value or (-1) if it fail
 */
int binary_search_recursive(int *array, int value, size_t low, size_t high)
{
	int mid = low + (high - low) / 2;

	if (low > high)
	{
		return (-1);
	}
	print_array(array, high, low);
	if (array[mid] == value)
	{
		return (mid);
	}
	else if (array[mid] < value)
	{
		return (binary_search_recursive(array, value, mid + 1, high));
	}
	else
	{
		return (binary_search_recursive(array, value, low, mid - 1));
	}
}
/**
 * binary_search - this function calls the binary search func
 * @array: this is the array
 * @size: this is the size of the array
 * @value: this is the value that we are searching for
 * Return: always the position or (-1) if the array doesnt exist
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_search_recursive(array, value, 0, size - 1));
}
