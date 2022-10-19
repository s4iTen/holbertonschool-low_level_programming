#include "main.h"
/**
 * test - check the code
 * @i: - it is a pointer called 'i'
 * @num: - it is a pointer called 'num'
 * Return: - return is a value that can change while the chondition changed
 */
int test(int num, int i)
{
	if (num == i)
		return (1);
	if (num > i && num % i == 0)
		return (0);
	if (num <= 1)
		return (0);
	else
		return (test(num, i + 1));
}

/**
 * is_prime_number - check the code
 * @n: - it is a pointer called 's'
 * Return: - return is a value that can change while the chondition changed
 */
int is_prime_number(int n)
{
	return (test(n, 2));
}
