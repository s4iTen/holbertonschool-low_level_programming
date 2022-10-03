#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
int ab;
for (ab = 0; ab < 9; ab++)
{
putchar(ab);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
