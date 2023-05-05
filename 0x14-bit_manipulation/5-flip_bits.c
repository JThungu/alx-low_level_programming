#include "main.h"

/**
 *print_binary - prints the binary equivalent of a decimal number
 *@n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int count = 0;

	for (int i = 63; i >= 0; i--)
	{
		unsigned long int current = n >> i;

		if (current & 1)
		{
			count++;
		}
	}
	return (count);
}
