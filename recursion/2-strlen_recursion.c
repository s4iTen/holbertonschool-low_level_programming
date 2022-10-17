#include "main.h"
/**
 * _strlen_recursion - check the code
 *
 * @s: - it is a pointer called 's'
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
