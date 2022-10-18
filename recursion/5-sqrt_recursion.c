#include "main.h"
/**
 * test - check the code
 * @i: - it is a pointer called 's'
 * @j: - it is a pointer called 's'
 * Return: - return is a value that can change while the chondition changed
 */
int test(int i, int j)
{
	if (j == i * i)
		return (i);
	else if (j > i * i)
		return (test(i + 1, j));
	else
		return (-1);
}
/**
 * _sqrt_recursion - check the code
 * @n: - it is a pointer called 's'
 * Return: - return is a value that can change while the chondition changed
 */
int _sqrt_recursion(int n)
{
	return (test(1, n));
}
