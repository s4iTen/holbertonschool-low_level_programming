#include "variadic_functions.h"
/**
 * sum_them_all - function return the sum of all the args
 * @n: it is a variable called 'n'
 * Return: always the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int sum = 0;
	unsigned int i = 0;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, unsigned);
	}
	va_end(list);
	return (sum);
}
