#include "main.h"
/**
 * reverse_array - Description 'coppy arrays'.
 * @a: - it is a pointer called dest
 * @n: - it is an integer called n
 *
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int t = 0;

	t = 0;
	n -= 1;
	while (i < n)
	{
		i++;
	}
	while (j <= i)
	{
		t = *(a + j);
		*(a + j) = *(a + i);
		*(a + i) = t;
		j++;
		i--;
	}
}
