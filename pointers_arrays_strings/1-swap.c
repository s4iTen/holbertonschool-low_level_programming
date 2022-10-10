#include "main.h"
/**
 * swap_int - Description 'change the value of a pointer'.
 * @b: - it is a pinter called n
 * @a: - it is a pinter called n
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
