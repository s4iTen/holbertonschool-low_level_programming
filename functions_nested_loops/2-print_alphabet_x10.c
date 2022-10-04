#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
  char i;
  char b;

  for (b = i; b < 10; b++)
    {
  for (i = 97; i <= 122; i++)
    {
      _putchar(i);
    }
  _putchar('\n');
  _putchar(b);
    }
}
