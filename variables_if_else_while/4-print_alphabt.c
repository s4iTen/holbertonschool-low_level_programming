#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
char ab;
for (ab = 97; ab < 123; ab++)
{
if (ab != 'e' && ab != 'q')
putchar(ab);
}
putchar('\n');
return (0);
}
