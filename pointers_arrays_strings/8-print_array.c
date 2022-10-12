#include "main.h"
/**
 * print_array - Description 'print array'.
 * @n: - it is an intiger called n
 * @a: - it is a pinter called *a
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
