#include <stdio.h>
#include "main.h"
/**
 * main - function that checks for uppercase character.
 * @i: the int for the paramaters of my function
 * @count: the int for the paramaters of my function
 */
int main()
{
	int i, count;

	count = 100;
	for (i = 1; i <= count; i++)
	{

		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}

		else
			printf("%d ", i);
	}
	return (0);
}
