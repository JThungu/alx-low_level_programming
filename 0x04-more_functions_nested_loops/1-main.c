#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char k;

	k = '0';
	printf("%c: %d\n", k, _isdigit(k));
	k = 'a';
	printf("%c: %d\n", k, _isdigit(k));
	return (0);
}
