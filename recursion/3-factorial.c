#include "main.h"
/**
 * factorial - check the code
 *
 * @n: - it is an integer called 'n'
 * Return: - return is a value that can change while the chondition changed
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);

	else
		return (n * factorial(n - 1));
}
