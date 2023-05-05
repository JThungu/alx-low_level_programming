#include "main.h"

/**
 *print_binary - prints the binary equivalent of a decimal number
 *@n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i;
	int count = 0;
	unsigned long int current;
	unsigned long int another = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = another >> i;

		if (current & 1)
		{
			count++;
		}
	}
	return (count);
}
