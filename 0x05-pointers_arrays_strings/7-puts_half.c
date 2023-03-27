#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int k, m, kong;

	kong = 0;

	for (k = 0; str[k] != '\0'; k++)
	kong++;
	m = (kong / 2);
	if ((kong % 2) == 1)
	m = ((kong + 1) / 2);
	for (k = m; str[k] != '\0'; k++)
	_putchar(str[k]);
	_putchar('\n');
}
