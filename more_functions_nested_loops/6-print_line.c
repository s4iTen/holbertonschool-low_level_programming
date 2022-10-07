#include "main.h"
/**
 * print_line - check the code 'print _and bach to new line'
 * @n: - integer to use
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
