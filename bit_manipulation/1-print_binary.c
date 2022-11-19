#include "main.h"
/**
 * print_binary - function that print the binary
 * @n: this is the binary integer
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	while (n >= 1)
	{
		_putchar((n & 1) + '0');
		n >>= 1;
	}
}