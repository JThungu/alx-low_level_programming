#include "main.h"
/**
 * rev_string - Reverses a string
 * @k: Input string
 * Return: String in reverse
 */
void rev_string(char *k)
{
	char rev = k[0];
	int counter = 0;
	int v;

	while (k[counter] != '\0')
	counter++;
	for (v = 0; v < counter; v++)
	{
	counter--;
	rev = k[v];
	k[v] = k[counter];
	k[counter] = rev;
	}
}
