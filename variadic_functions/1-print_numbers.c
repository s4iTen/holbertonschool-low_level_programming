#include "variadic_functions.h"
/**
 * print_numbers - finction that print the numbers with new line
 * @separator: it is a pointer that have the separator between the numbers
 * @n: it is a variable that its the number of the arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(list, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
