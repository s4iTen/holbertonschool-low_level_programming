#include "main.h"
/**
* _islower - change the returne
*
* Return: 0 and 1
* @c: is the integer
*/
int _islower(int c)
{
	if (c > 97 && c < 123)
		return (1);
    else if (c > 65 && c < 90)
        return (1);
	else
		return (0);
}