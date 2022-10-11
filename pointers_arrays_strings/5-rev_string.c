#include "main.h"
#include <string.h>
/**
 * rev_string - Description 'REVERSE'.
 * @s: - it is a pinter called str
 *
 */
void rev_string(char *s)
{
	int i;
	int len = strlen(s);
	char *D, *F, c;

	D = s;
	F = s;

	for (i = 0; i < len - 1; i++)
	{
		F++;
	}
	for (i = 0; i < len / 2; i++)
	{
		c = *F;
		*F = *D;
		*D = c;

		D++;
		F--;
	}
}
