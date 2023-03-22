#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char p;
	int t;

	for (t = 1 ; t <= 10; t++)
	{
		for (p = 'a'; p <= 'z'; p++)
			_putchar(p);
		_putchar('\n');
	}
}
