#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
  char ab;
  for (ab = 48; ab < 58; ab++)
    {
      putchar(ab);
      putchar(',');
      putchar(' ');
    }
  putchar('\n');
  return (0);
}
