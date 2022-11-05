#include "variadic_functions.h"
/**
 * print_strings - finction that print the strings with new line
 * @separator: it is a pointer that have the separator between the numbers
 * @n: it is a variable that its the number of the arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	char *p;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		p = (va_arg(list, char *));
		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
