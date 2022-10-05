#include "main.h"
/**
 * print_last_digit - check the code
 * @n: in the integer
 * Return: change the return if
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	
	_putchar((n % 10) + '0');
	return (n % 10);
}
