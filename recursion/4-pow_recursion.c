#include "main.h"
/**
 * _pow_recursion - check the code
 *
 * @x: - it is an integer called 'n'
 * @y: - it is an integer called 'n'
 * Return: - return is a value that can change while the chondition changed
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
