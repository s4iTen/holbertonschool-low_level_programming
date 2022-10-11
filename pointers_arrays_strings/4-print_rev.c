#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - Description 'Display reverse string'.
 * @s: - it is a pinter called str
 *
 */
void print_rev(char *s)
{
	int i;
	int len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar("\n")
}
