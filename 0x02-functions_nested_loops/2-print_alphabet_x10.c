#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char p;
	int t;

	t = 0;
	while (t < 10)
	{
		p = 'a';
		while (p <= 'z')
			{
				_putchar(p);
				p++;
			}
		_putchar('\n');
		t++;
	}
}
