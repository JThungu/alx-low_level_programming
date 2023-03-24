#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @k: number of times the character _ should be printed
 */

void print_line(int k)
{
	if (k <= 0)
	{
		_putchar('\n');
	} else
	{
		int x;

		for (x = 1; x <= k; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
