#include "main.h"
/**
 * _isdigit - Description: 'is upper'
 *
 * Return: always 0 or 1
 * @c: - integer to use
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
