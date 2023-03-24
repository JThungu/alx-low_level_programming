#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @k: number of times the character \ should be printed
 */

void print_diagonal(int k)
{
	if (k <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < k; i++)
		{
			for (j = 0; j < k; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
