#include "main.h"
/**
 * print_rev - imprime en reversa
 * @k: string
 * return: 0
 */
void print_rev(char *k)
{
	int longi = 0;
	int o;

	while (*k != '\0')
	{
	longi++;
	k++;
	}
	k--;
	for (o = longi; o > 0; o--)
	{
	_putchar(*k);
	k--;
	}
	_putchar('\n');
}
