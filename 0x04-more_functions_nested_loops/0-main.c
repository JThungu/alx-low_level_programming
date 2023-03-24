#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	char k;

	k = 'A';

	printf("%c: %d\n", k, _isupper(k));
	k = 'a';
	printf("%c: %d\n", k, _isupper(k));
	return (0);
}
