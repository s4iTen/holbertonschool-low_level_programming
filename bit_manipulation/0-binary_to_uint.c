#include "main.h"
/**
 * binary_to_uint - function convert from binary to decimal
 * @b: this is string number
 * Return: Always the decimal num or '0'
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, pow = 1;
	int i = 0;

	if (b[i] == '\0')
		return (0);
	while (b[i])
		i++;
	i -= 1;
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		dec += (b[i] - '0') * pow;
		pow *= 2;
		i--;
	}
	return dec;
}
