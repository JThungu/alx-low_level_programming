#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints combination of single digits'
 * Return: Always 0
 */
int main(void)
{
	int k;
	char j;

	for (k = 0; k <= 9; k++)
		putchar(k + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
