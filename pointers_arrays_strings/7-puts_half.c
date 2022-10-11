#include "main.h"
/**
 * puts_half - Description 'print the last half'.
 * @str: - it is a pinter called str
 *
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);

	if ((len % 2) == 0)
	{
		for (i = (len / 2); i <= len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = ((len - 1) / 2); i < len - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
