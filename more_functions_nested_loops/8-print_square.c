#include "main.h"
/**
 * print_square - function that checks for uppercase character.
 * @size: the int for the paramaters of my function
 *
 */
void print_square(int size)
{
	int a;
    int b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
            for (b = 0; b < a; b++)
            {
                _putchar('#');
            }
            b = 0;
			_putchar('\n');
		}
	
	}
	else
	{
		_putchar('\n');
	}
}



