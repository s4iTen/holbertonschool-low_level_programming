#include "main.h"
/**
 * _strlen - Description 'count lenght of pointer'.
 * @s: - it is a pinter called s
 *
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}
	return (c);
}
