#include "main.h"
/**
 * more_numbers - check the code 'print from 0 to 14, 10 times.'
 *
 */
void more_numbers(void)
{
	int a;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if ((a / 10) != 0)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
