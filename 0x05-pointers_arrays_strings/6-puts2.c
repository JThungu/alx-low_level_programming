#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int u = 0;
	char *k = str;
	int p;

	while (*k != '\0')
	{
		k++;
	longi++;
	}
	u = longi - 1;
	for (p = 0 ; p <= u ; p++)
	{
	if (p % 2 == 0)
	{
	_putchar(str[p]);
	}
	}
	_putchar('\n');
}
