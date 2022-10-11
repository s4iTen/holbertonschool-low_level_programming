#include "main.h"
#include <string.h>
/**
 * puts2 - Description 'print pair'.
 * @str: - it is a pinter called str
 *
 */
void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
