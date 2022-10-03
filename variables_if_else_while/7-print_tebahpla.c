#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
char ab;
for (ab = 'z'; ab >= 'a'; ab--)
{
putchar(ab);
}
putchar('\n');
return (0);
}
