#include "search_algos.h"

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

int binary_search_recursive(int *array, int value, size_t low, size_t high)
{
    int mid = low + (high - low) / 2;

    if (low > high) {
        return -1;
    }
    print_array(array, high, low);
    if (array[mid] == value) {
        return mid;
    } else if (array[mid] < value) {
        return binary_search_recursive(array, value, mid + 1, high);
    } else {
        return binary_search_recursive(array, value, low, mid - 1);
    }
}
int binary_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1);
    return binary_search_recursive(array, value, 0, size - 1);
}