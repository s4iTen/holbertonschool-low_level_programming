#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char i;

int b;

for (b = 0; b < 10; b++)
{
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
