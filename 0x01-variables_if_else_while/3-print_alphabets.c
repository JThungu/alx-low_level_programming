#include <stdio.h>
/**
 * main - Entry point
 *Description: 'print uppercase and lowercase'
 *Return: Always 0
 */
int main(void)
{
	int j = 97;
	int k = 65;

	while (j <= 122)
	{
		putchar(j);
		j++;
	}
	while (k <= 90)
	{
		putchar(k);
		k++;
	}
	putchar('\n');
	return (0);
}
