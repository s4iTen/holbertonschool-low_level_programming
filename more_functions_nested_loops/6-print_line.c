#include "main.h"

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('_');
		}
	}
	else
	{
		_putchar('\n');
	}
}
