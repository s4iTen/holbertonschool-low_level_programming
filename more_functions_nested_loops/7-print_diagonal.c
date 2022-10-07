#include "main.h"
/**
 * print_diagonal - check the code 'print ' 'and bach to new line'
 * @n: - integer to use
 */
void print_diagonal(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar(' ');
		}
	_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
