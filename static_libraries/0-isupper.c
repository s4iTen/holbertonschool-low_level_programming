#include "main.h"
/**
 * _isupper - Description: 'is upper'
 *
 * Return: always 0 or 1
 * @c: - integer to use
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
