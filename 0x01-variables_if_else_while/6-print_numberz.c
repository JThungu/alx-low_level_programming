#include <stdio.h>
/**
 * main -Entry point
 * Description: 'Single digitz"
 * Return: Always 0
 */
int main(void)
{
	int m;

	for (m = 0; m <= 9; m++)
		putchar(m + '0');
	putchar('\n');
	return (0);
}
