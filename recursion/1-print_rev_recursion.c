#include "main.h"
/**
 * _print_rev_recursion - check the code
 *
 * @s: - it is a pointer called 's'
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
