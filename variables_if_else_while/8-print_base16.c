#include <stdio.h>

/**
 * main - Disolay all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
int aa;
char ab;

for (aa = 0; aa < 10; aa++)
putchar((aa % 10) + '0');

for (ab = 'a'; ab <= 'f'; ab++)
putchar(ab);

putchar('\n');

return (0);
}
